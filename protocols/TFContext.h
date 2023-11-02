
@protocol TFContext <TFCallbackRegistration>

@required

- (void)useObject:(id)arg1 forClass:(Class)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(NSString *)arg3;
- (void)useObject:(id)arg1 forProtocol:(Protocol *)arg2;
- (void)useObject:(id)arg1 forProtocol:(Protocol *)arg2 name:(NSString *)arg3;

@end
