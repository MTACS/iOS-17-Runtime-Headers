
@interface CNSharingProfileOnboardingFlowResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    bool  _didPersistImageToContact;
    NSString * _familyName;
    NSString * _givenName;
    NSData * _imageData;
    unsigned long long  _sharingAudience;
    NSString * _type;
    CNWallpaper * _wallpaper;
    NSData * _watchWallpaperImageData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic) bool didPersistImageToContact;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) CNWallpaper *wallpaper;
@property (nonatomic, readonly) NSData *watchWallpaperImageData;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)description;
- (bool)didPersistImageToContact;
- (id)familyName;
- (id)givenName;
- (id)imageData;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDidPersistImageToContact:(bool)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setSharingAudience:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setWallpaper:(id)arg1;
- (unsigned long long)sharingAudience;
- (id)type;
- (id)wallpaper;
- (id)watchWallpaperImageData;

@end
