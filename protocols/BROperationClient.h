
@protocol BROperationClient <BRCancellable>

@required

- (NSString *)description;
- (oneway void)progressCallbackWithTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)setRemoteOperationProxy:(NSObject<BRCancellable> *)arg1 userInfo:(NSDictionary *)arg2;

@end
