void drawZero()
{
  int cp = c+7;
  // top left down
  matrix.drawLine(c,r+1,c,rb-1,red); 
  // top right down
  matrix.drawLine(cp,r+1,cp,rb-1,red);
  // top left to top right
  matrix.drawLine(c+1,r,cp-1,r,red);
  // bottom left to bottom right
  matrix.drawLine(c+1,rb,cp-1,rb,red);
}
