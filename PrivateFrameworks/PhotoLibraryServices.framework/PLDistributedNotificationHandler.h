
@interface PLDistributedNotificationHandler : NSObject {
    PLPhotoLibraryBundleController * _libraryBundleController;
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

- (void).cxx_destruct;
- (void)_handleCloudPhotoNotification;
- (void)_handleNotification:(id)arg1;
- (void)_openSystemPhotoLibrary;
- (id)initWithLibraryBundleController:(id)arg1;
- (void)registerForNotifications;

@end
