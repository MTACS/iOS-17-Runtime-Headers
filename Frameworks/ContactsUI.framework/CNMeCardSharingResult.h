
@interface CNMeCardSharingResult : NSObject {
    CNContactImage * _contactImage;
    bool  _didSaveImageToMeCard;
    NSString * _familyName;
    NSString * _givenName;
    CNWallpaper * _wallpaper;
    NSData * _watchWallpaperImageData;
}

@property (nonatomic, readonly) CNContactImage *contactImage;
@property (nonatomic, readonly) bool didSaveImageToMeCard;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) CNWallpaper *wallpaper;
@property (nonatomic, readonly) NSData *watchWallpaperImageData;

- (void).cxx_destruct;
- (id)contactImage;
- (id)description;
- (bool)didSaveImageToMeCard;
- (id)familyName;
- (id)givenName;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2 contactImage:(id)arg3 wallpaper:(id)arg4 watchWallpaperImageData:(id)arg5 didSaveImageToMeCard:(bool)arg6;
- (id)wallpaper;
- (id)watchWallpaperImageData;

@end
