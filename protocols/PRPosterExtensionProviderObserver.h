
@protocol PRPosterExtensionProviderObserver <NSObject>

@optional

- (void)posterExtensionProvider:(id <PRPosterExtensionProvider>)arg1 foundExtensions:(NSArray *)arg2;
- (void)posterExtensionProvider:(id <PRPosterExtensionProvider>)arg1 updatedExtensionsFrom:(NSSet *)arg2 to:(NSSet *)arg3;

@end
