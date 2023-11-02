
@interface EQKitLayoutElementaryStackDigitRow : NSObject <EQKitLayoutElementaryStackRow> {
    long long  mAlignmentShift;
    NSArray * mColumnBoxes;
    unsigned long long  mFirstColumnIndex;
    double  mFollowingSpace;
}

@property (nonatomic, readonly) long long alignmentShift;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long firstColumnIndex;
@property (nonatomic, readonly) double followingSpace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool spansStack;
@property (readonly) Class superclass;

- (long long)alignmentShift;
- (unsigned long long)columnCount;
- (void)dealloc;
- (unsigned long long)firstColumnIndex;
- (double)followingSpace;
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(struct __wrap_iter<double *> { double *x1; })arg2 iterMax:(struct __wrap_iter<double *> { double *x1; })arg3 previousRow:(id)arg4 layoutManager:(const void*)arg5;
- (id)p_crossoutDigitBox:(id)arg1 crossout:(int)arg2 layoutManager:(const void*)arg3;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x1; })arg1;
- (void)setFirstColumnIndex:(unsigned long long)arg1;
- (bool)spansStack;

@end
