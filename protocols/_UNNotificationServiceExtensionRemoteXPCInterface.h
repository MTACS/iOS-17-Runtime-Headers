
@protocol _UNNotificationServiceExtensionRemoteXPCInterface <_UNNotificationServiceExtensionXPCInterface>

@required

- (void)deleteAttachmentFilesInContentIfNecessary:(UNNotificationContent *)arg1;
- (void)didReceiveNotificationRequest:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: UNNotificationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UNNotificationContent *, void*
- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionTimeWillExpire;

@end
