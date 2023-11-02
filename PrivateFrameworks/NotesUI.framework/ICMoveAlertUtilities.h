
@interface ICMoveAlertUtilities : NSObject

+ (void)postAlertForFolderDepthLimitWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)postAlertForMovingFolderWithSharedNotes:(id)arg1 sharedSubfolders:(id)arg2 destination:(id)arg3 presentingViewController:(id)arg4 shareHandler:(id /* block */)arg5 cancelHandler:(id /* block */)arg6;
+ (void)postAlertForMovingLockedNotesToOtherAccountIsCopy:(bool)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)postAlertForMovingLockedOrSingleJoinedNotesToSharedFolderWithCountOfNotes:(unsigned long long)arg1 guiltyObjects:(id)arg2 presentingViewController:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)postAlertForMovingNotesContainingSharedNotesToSharedFolder:(id)arg1 destination:(id)arg2 presentingViewController:(id)arg3 shareHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5;
+ (void)postAlertForMovingSharedNotesToAnotherAccountWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)postAlertForMovingSmartFolderWithRestrictedFilterToLocalAccount:(id)arg1 presentingViewController:(id)arg2;
+ (void)postAlertForOwnerStoppedSharingCurrentFolderWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)postAlertForSharingFolderContainingLockedOrJoinedRootObjectsWithGuiltyObjects:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)postAlertForSharingFolderWithSharedNotes:(id)arg1 sharedSubfolders:(id)arg2 presentingViewController:(id)arg3 shareHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5;
+ (void)postAlertForUnsupportedAttachmentsInLegacyAccount:(id)arg1 presentingViewController:(id)arg2;
+ (void)postAlertWithOKButtonWithTitle:(id)arg1 message:(id)arg2 presentingViewController:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)postAlertWithProceedAndCancelButtonsWithTitle:(id)arg1 message:(id)arg2 proceedTitle:(id)arg3 presentingViewController:(id)arg4 proceedHandler:(id /* block */)arg5 cancelHandler:(id /* block */)arg6;
+ (void)setSuppressesAlerts:(bool)arg1;
+ (bool)suppressesAlerts;

@end
