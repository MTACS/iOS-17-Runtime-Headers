
@protocol DDSTRIClient <NSObject>

@required

- (<TRINotificationToken> *)addUpdateHandlerForNamespaceName:(void *)arg1 queue:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TRINamespaceUpdateProtocol> *, void*
- (TRIExperimentIdentifiers *)experimentIdentifiersWithNamespaceName:(NSString *)arg1;
- (TRILevel *)levelForFactor:(NSString *)arg1 withNamespaceName:(NSString *)arg2;
- (void)refresh;
- (void)removeUpdateHandlerForToken:(id <TRINotificationToken>)arg1;

@end
