
@interface CNVisualIdentity : NSObject <NSCopying> {
    NSString * _abbreviatedName;
    UIImage * _avatarImage;
    NSArray * _contacts;
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
    NSData * _fullscreenImageData;
    NSString * _identifier;
    long long  _identityType;
    NSData * _imageData;
    NSData * _imageHash;
    NSString * _imageType;
    NSArray * _linkedContacts;
    NSData * _memojiMetadata;
    NSString * _name;
    NSString * _shortenedDisplayName;
    NSData * _thumbnailImageData;
    CNWallpaper * _wallpaper;
}

@property (nonatomic, retain) NSString *abbreviatedName;
@property (nonatomic, retain) UIImage *avatarImage;
@property (nonatomic, readonly) long long contactImageSource;
@property (nonatomic, readonly) unsigned long long contactImageType;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, retain) NSData *fullscreenImageData;
@property (nonatomic, readonly) bool hasLinkedContacts;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long identityType;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSData *imageHash;
@property (nonatomic) NSString *imageType;
@property (nonatomic, retain) NSArray *linkedContacts;
@property (nonatomic, retain) NSData *memojiMetadata;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *shortenedDisplayName;
@property (nonatomic, retain) NSData *thumbnailImageData;
@property (nonatomic, retain) CNWallpaper *wallpaper;

+ (id)abbreviatedNameForGroupName:(id)arg1;
+ (id)descriptorForImageKeys;
+ (id)descriptorForRequiredKeys;
+ (id)firstComposedCharacterFromString:(id)arg1;
+ (id)log;

- (void).cxx_destruct;
- (id)abbreviatedName;
- (id)avatarImage;
- (bool)canUpdateGroupName;
- (void)clearImage;
- (void)clearImageAndWallpaper;
- (void)clearWallpaper;
- (long long)contactImageSource;
- (unsigned long long)contactImageType;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)fullscreenImageData;
- (bool)hasImageDataAvailable;
- (bool)hasLinkedContacts;
- (id)identifier;
- (long long)identityType;
- (bool)imageAllowsEditing;
- (id)imageData;
- (id)imageHash;
- (id)imageType;
- (id)initWithContact:(id)arg1;
- (id)initWithGroupIdentity:(id)arg1;
- (id)linkedContacts;
- (id)memojiMetadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (void)setAbbreviatedName:(id)arg1;
- (void)setAvatarImage:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullscreenImageData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentityType:(long long)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageHash:(id)arg1;
- (void)setImageType:(id)arg1;
- (void)setLinkedContacts:(id)arg1;
- (void)setMemojiMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShortenedDisplayName:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setWallpaper:(id)arg1;
- (id)shortenedDisplayName;
- (id)thumbnailImageData;
- (void)updateContactWithGivenName:(id)arg1 familyName:(id)arg2;
- (void)updateGroupName:(id)arg1;
- (void)updateImageForContact:(id)arg1;
- (void)updateImageType:(unsigned long long)arg1;
- (id)wallpaper;
- (id)wallpaperType;

@end
