
@interface CBFloatArray2D : CBFloatArray {
    unsigned long long  _cols;
    unsigned long long  _rows;
}

- (float)getCol:(unsigned long long)arg1 andRow:(unsigned long long)arg2;
- (id)initWithValues:(float*)arg1 andCountCols:(unsigned long long)arg2 andRows:(unsigned long long)arg3;

@end
