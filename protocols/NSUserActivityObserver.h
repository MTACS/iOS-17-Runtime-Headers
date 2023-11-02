
@protocol NSUserActivityObserver <NSObject>

@optional

- (void)userActivityDidBecomeCurrent:(NSUserActivity *)arg1 current:(bool)arg2;
- (void)userActivityPayloadWasChanged:(NSUserActivity *)arg1 payloadIdentifier:(NSString *)arg2;
- (void)userActivityPersistentIdentifierWasChanged:(NSUserActivity *)arg1 persistentIdentifier:(NSString *)arg2 previousValue:(NSString *)arg3;
- (void)userActivityTargetContentIdentifierWasChanged:(NSUserActivity *)arg1 targetContentIdentifier:(NSString *)arg2 previousValue:(NSString *)arg3;
- (void)userActivityWasCreated:(NSUserActivity *)arg1;
- (void)userActivityWasInvalidated:(NSUserActivity *)arg1;
- (void)userActivityWasMadeDirty:(NSUserActivity *)arg1;
- (void)userActivityWasSerialized:(NSUserActivity *)arg1 archived:(NSData *)arg2;
- (void)userActivityWasSynchronized:(NSUserActivity *)arg1;
- (void)userActivityWebpageURLWasChanged:(NSUserActivity *)arg1 webpageURL:(NSURL *)arg2 previousValue:(NSURL *)arg3;
- (void)userActivityWillBeDestroyed:(NSUserActivity *)arg1;
- (void)userActivityWillBecomeCurrent:(NSUserActivity *)arg1 current:(bool)arg2;
- (void)userActivityWillSynchronize:(NSUserActivity *)arg1;

@end
