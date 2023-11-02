
@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;
- (void)dealloc;
- (id)init;

@end
