
@interface CNPhotoPickerCapabilities : NSObject

+ (bool)allowsAvatarFaceTracking;
+ (bool)allowsAvatarStoreAccess;
+ (bool)allowsAvatarUI;
+ (bool)allowsCameraAccess;
+ (bool)allowsPhotoLibraryAccess;
+ (bool)isCameraTCCEnabled;

@end
