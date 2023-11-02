
@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow> {
    long long  mAlignmentShift;
    unsigned long long  mFirstColumnIndex;
    double  mFollowingSpace;
    unsigned long long  mLength;
    double  mThickness;
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
- (unsigned long long)firstColumnIndex;
- (double)followingSpace;
- (id)initWithLength:(unsigned long long)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(struct __wrap_iter<double *> { double *x1; })arg2 iterMax:(struct __wrap_iter<double *> { double *x1; })arg3 previousRow:(id)arg4 layoutManager:(const void*)arg5;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x1; })arg1;
- (void)setFirstColumnIndex:(unsigned long long)arg1;
- (bool)spansStack;

@end
