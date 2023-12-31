
@protocol XRLazyKVOResponder <NSObject>

@required

- (void)handleLazyKVOUpdate:(XRLazyKVOAdapter *)arg1;

@optional

- (void)prepareForLazyKVOUpdate:(XRLazyKVOAdapter *)arg1 object:(id)arg2 keyPath:(NSString *)arg3 context:(const void*)arg4;

@end
