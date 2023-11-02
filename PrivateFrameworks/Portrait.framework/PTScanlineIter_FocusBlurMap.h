
@interface PTScanlineIter_FocusBlurMap : NSObject <PTScanlineIter> {
    unsigned long long  _currentTile;
    unsigned long long  _currentTileRow;
    PTScanlineMask_FocusBlurMap * _mask;
}

@property unsigned long long currentTile;
@property unsigned long long currentTileRow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PTScanlineMask_FocusBlurMap *mask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_advanceToNextTile;
- (void)_advanceToNextTileRow;
- (unsigned long long)currentTile;
- (unsigned long long)currentTileRow;
- (id)initWithMask:(id)arg1;
- (id)mask;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextRangeX;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextRangeY;
- (void)reset;
- (void)resetX;
- (void)setCurrentTile:(unsigned long long)arg1;
- (void)setCurrentTileRow:(unsigned long long)arg1;

@end
