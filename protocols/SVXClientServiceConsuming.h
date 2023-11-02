
@protocol SVXClientServiceConsuming <NSObject>

@required

- (void)clientServiceDidChange:(bool)arg1;
- (id)initWithClientServiceProvider:(id <SVXClientServiceProviding>)arg1 analytics:(AFAnalytics *)arg2 performer:(id <SVXPerforming>)arg3;

@end
