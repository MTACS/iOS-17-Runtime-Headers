
@protocol CDPDCircleControl <NSObject>

@required

- (void)applyToJoinCircleWithJoinHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelApplicationToJoinCircle;
- (<CDPDCircleProxy> *)circleProxy;
- (unsigned long long)circleStatus;
- (int)circleSyncingStatus;
- (long long)cliqueStatus;
- (<CDPDCircleDelegate> *)delegate;
- (id)initWithUiProvider:(id <CDPStateUIProviderInternal>)arg1 delegate:(id <CDPDCircleDelegate>)arg2 circleProxy:(id <CDPDCircleProxy>)arg3 octagonTrustProxy:(id <CDPDOctagonTrustProxy>)arg4;
- (void)joinCircleIgnoringBackups:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDCircleJoinResult *, NSError *, void*
- (void)joinCircleWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDCircleJoinResult *, NSError *, void*
- (NSString *)peerID;
- (void)prepareCircleStateForRecovery;
- (void)resetCircleIncludingCloudKitData:(void *)arg1 cloudKitResetReasonDescription:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCircleProxy:(id <CDPDCircleProxy>)arg1;
- (bool)synchronizeCircleViews;
- (<CDPStateUIProviderInternal> *)uiProvider;
- (void)useCircleInfoToUpdateNameForDevices:(NSArray *)arg1;

@optional

- (void)joinCircleAfterRecoveryWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
