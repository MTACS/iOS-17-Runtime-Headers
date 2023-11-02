
@protocol BRCUserNotifier <NSObject>

@required

- (void)close;
- (void)moveToFront;
- (void)showErrorDeviceOfflineForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorDocumentsAppNotVisibleForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorInstallNativeAppForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)showErrorParticipantLimitReachedForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showErrorReasonUnknownForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorServerNotReachableForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showErrorSignInToiCloudForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)showErrorTurnOniCloudDriveForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)showJoinDialogForShareMetadata:(void *)arg1 session:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CKShareMetadata *, BRCAccountSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
