
@protocol INIntentResponseObserver <NSObject>

@required

- (void)intentResponseDidUpdate:(INIntentResponse *)arg1 withSerializedCacheItems:(NSSet *)arg2;

@optional

- (void)intentResponseDidUpdate:(INIntentResponse *)arg1;

@end
