
@protocol EQKitLayoutElementaryStackRow <NSObject>

@required

- (long long)alignmentShift;
- (unsigned long long)columnCount;
- (unsigned long long)firstColumnIndex;
- (double)followingSpace;
- (EQKitBox *)newBoxWithStackWidth:(double)arg1 columnWidthIter:(struct __wrap_iter<double *> { double *x1; })arg2 iterMax:(struct __wrap_iter<double *> { double *x1; })arg3 previousRow:(id <EQKitLayoutElementaryStackRow>)arg4 layoutManager:(const void*)arg5;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x1; })arg1;
- (void)setFirstColumnIndex:(unsigned long long)arg1;
- (bool)spansStack;

@end
