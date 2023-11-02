
@protocol TSUiOSMemoryWarningFlushable <NSObject>

@required

- (void)flush;

@optional

- (int)flushCost;
- (int)reloadCost;
- (void)setFlushingManager:(OITSUFlushingManager *)arg1;

@end
