
@interface MusicKit_SoftLinking_MPCloudServiceStatusController : NSObject {
    MPCloudServiceStatusController * _underlyingServiceStatusController;
}

+ (id)cloudLibraryEnabledDidChangeNotificationName;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)_handleCloudLibraryEnabledDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingServiceStatusController:(id)arg1;
- (void)beginObservingCloudLibraryEnabled;
- (void)dealloc;
- (void)endObservingCloudLibraryEnabled;

@end
