
@interface CNPhotoPickerConfiguration : NSObject {
    bool  _allowAnimojiCreation;
    bool  _allowPhotoCapture;
    bool  _allowPhotoFromLibrary;
    bool  _allowRotation;
    bool  _includeAnimoji;
    bool  _includeContactImage;
    bool  _includeEmoji;
    bool  _includeFaces;
    bool  _includeMonograms;
    bool  _includeRecents;
    bool  _includeUnifiedContactImages;
}

@property (nonatomic, readonly) bool allowAnimojiCreation;
@property (nonatomic, readonly) bool allowPhotoCapture;
@property (nonatomic, readonly) bool allowPhotoFromLibrary;
@property (nonatomic, readonly) bool allowRotation;
@property (nonatomic, readonly) bool includeAnimoji;
@property (nonatomic, readonly) bool includeContactImage;
@property (nonatomic, readonly) bool includeEmoji;
@property (nonatomic, readonly) bool includeFaces;
@property (nonatomic, readonly) bool includeMonograms;
@property (nonatomic, readonly) bool includeRecents;
@property (nonatomic, readonly) bool includeUnifiedContactImages;

+ (id)contactsConfiguration;
+ (id)defaultConfiguration;
+ (id)gameCenterConfiguration;

- (bool)allowAnimojiCreation;
- (bool)allowPhotoCapture;
- (bool)allowPhotoFromLibrary;
- (bool)allowRotation;
- (id)configurationBySettingAllowsPhotoCapture:(bool)arg1;
- (bool)includeAnimoji;
- (bool)includeContactImage;
- (bool)includeEmoji;
- (bool)includeFaces;
- (bool)includeMonograms;
- (bool)includeRecents;
- (bool)includeUnifiedContactImages;
- (id)initWithIncludeContactImage:(bool)arg1 includeUnifiedContactImages:(bool)arg2 includeFaces:(bool)arg3 includeMonograms:(bool)arg4 includeAnimoji:(bool)arg5 includeRecents:(bool)arg6 includeEmoji:(bool)arg7 allowPhotoCapture:(bool)arg8 allowPhotoFromLibrary:(bool)arg9 allowAnimojiCreation:(bool)arg10 allowRotation:(bool)arg11;

@end
