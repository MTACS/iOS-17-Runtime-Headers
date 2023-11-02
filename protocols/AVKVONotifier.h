
@protocol AVKVONotifier <AVCallbackCancellation>

@required

- (void)callbackDidFireWithChangeDictionary:(NSDictionary *)arg1;
- (void)start;

@end
