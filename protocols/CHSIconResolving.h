
@protocol CHSIconResolving

@required

- (void)resolveIconForContainerIdentity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGImage { }*, void*
- (NSString *)resolveIconVersionForExtensionIdentity:(CHSExtensionIdentity *)arg1;

@end
