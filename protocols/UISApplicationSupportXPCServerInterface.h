
@protocol UISApplicationSupportXPCServerInterface <NSObject>

@required

- (void)destroyScenesPersistentIdentifiers:(void *)arg1 animationType:(void *)arg2 destroySessions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray<__NSString__> *, NSNumber *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)initializeClientWithParameters:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UISApplicationInitializationContextParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISApplicationInitializationContext *, NSError *, void*
- (oneway void)requestPasscodeUnlockUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
