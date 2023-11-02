
@protocol WBSCyclerTestSuite <NSObject>

@required

- (id)init;
- (void)runWithTarget:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <WBSCyclerTestTarget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

+ (bool)setValue:(NSString *)arg1 forConfigurationKey:(NSString *)arg2;

- (bool)canHandleRequest:(NSString *)arg1;
- (void)handleRequest:(void *)arg1 withTarget:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, <WBSCyclerTestTarget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)isFinished;
- (WBSCyclerIterationCounter *)iterationCounter;
- (void)setIterationCounter:(WBSCyclerIterationCounter *)arg1;
- (void)setUp;
- (void)tearDown;

@end
