
@interface CNUserSetupPictureManager : NSObject

+ (bool)clearUserSetupPictureData;
+ (bool)hasUserSetupPictureData;
+ (id)log;
+ (id)userSetupPictureData;
+ (bool)userSetupPictureDataIsFresh;
+ (id)userSetupPictureFilePath;
+ (id)userSetupPicturePath;

@end
