
@interface INCWidgetIntentProvider : NSObject

+ (void)initialize;

- (void)_provideAppIntentWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)intentsExtensionForExtension:(id)arg1 compatibleWithIntent:(id)arg2 error:(id*)arg3;
- (void)provideAppIntentWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideIntentWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;

@end
