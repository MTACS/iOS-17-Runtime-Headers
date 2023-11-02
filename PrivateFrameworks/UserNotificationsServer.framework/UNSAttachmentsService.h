
@interface UNSAttachmentsService : NSObject <UNCAttachmentsService, UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver> {
    UNSAttachmentsRepository * _attachmentsRepository;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSchedulingService * _notificationSchedulingService;
    UNSPendingNotificationRepository * _pendingNotificationRepository;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1;
+ (id)_notificationIdentifiersForNotificationRecords:(id)arg1;
+ (id)_stagingDirectory;

- (void).cxx_destruct;
- (void)_beginObservingNotificationChanges;
- (void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_applicationDidUninstall:(id)arg1;
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_ensureIntegrityWithCompletionHandler:(id /* block */)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 fromLocalClientConnection:(id)arg3 orFromServiceExtensionOfBundleProxy:(id)arg4 continueOnFailure:(bool)arg5 error:(id*)arg6;
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 fromLocalClientConnection:(id)arg4 orFromServiceExtensionOfBundleProxy:(id)arg5 error:(id*)arg6;
- (id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 fromLocalClientConnection:(id)arg4 orFromServiceExtensionOfBundleProxy:(id)arg5 error:(id*)arg6;
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 fromLocalClientConnection:(id)arg4 orFromServiceExtensionOfBundleProxy:(id)arg5 error:(id*)arg6;
- (void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_temporaryAttachmentFileURL;
- (void)contentProtectionStateChangedForFirstUnlock:(bool)arg1;
- (void)ensureIntegrityWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAttachmentsRepository:(id)arg1 notificationRepository:(id)arg2 notificationSchedulingService:(id)arg3 pendingNotificationRepository:(id)arg4;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 fromLocalClientConnection:(id)arg3 error:(id*)arg4;
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 fromBundleProxyForServiceExtension:(id)arg3;

@end
