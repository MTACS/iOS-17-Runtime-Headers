
@protocol BSServiceConnectionListenerConfiguring

@required

- (void)setDelegate:(id <BSServiceConnectionListenerDelegate>)arg1;
- (void)setDomain:(NSString *)arg1;
- (void)setInstance:(NSString *)arg1;
- (void)setService:(NSString *)arg1;

@end
