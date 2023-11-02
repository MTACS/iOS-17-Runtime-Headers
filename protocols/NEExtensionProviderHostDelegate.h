
@protocol NEExtensionProviderHostDelegate <NSObject>

@required

- (void)extension:(NEExtensionProviderHostContext *)arg1 didFailWithError:(NSError *)arg2;
- (void)extension:(NEExtensionProviderHostContext *)arg1 didStartWithError:(NSError *)arg2;
- (void)extensionDidStop:(NEExtensionProviderHostContext *)arg1;

@end
