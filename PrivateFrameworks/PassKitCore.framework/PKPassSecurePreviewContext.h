
@interface PKPassSecurePreviewContext : NSObject {
    NSString * _backgroundColor;
    struct CGImage { } * _backgroundImage;
    struct CGImage { } * _icon;
    struct CGImage { } * _image;
    NSString * _primaryColor;
    NSString * _primaryText;
    NSString * _secondaryColor;
    NSString * _secondaryText;
    NSString * _tertiaryColor;
    NSString * _tertiaryText;
}

@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, readonly) struct CGImage { }*backgroundImage;
@property (nonatomic, readonly) struct CGImage { }*icon;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, copy) NSString *primaryColor;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryColor;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *tertiaryColor;
@property (nonatomic, copy) NSString *tertiaryText;

+ (id)createMessagesPreviewForPassFileURL:(id)arg1 withOutputDirectory:(id)arg2;
+ (id)createMessagesPreviewForPassesFileURL:(id)arg1 withOutputDirectory:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithBackgroundColor:(id)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 tertiaryColor:(id)arg4;
- (id)backgroundColor;
- (struct CGImage { }*)backgroundImage;
- (void)dealloc;
- (struct CGImage { }*)icon;
- (struct CGImage { }*)image;
- (id)init;
- (id)primaryColor;
- (id)primaryText;
- (id)secondaryColor;
- (id)secondaryText;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(struct CGImage { }*)arg1;
- (void)setIcon:(struct CGImage { }*)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setTertiaryColor:(id)arg1;
- (void)setTertiaryText:(id)arg1;
- (id)tertiaryColor;
- (id)tertiaryText;

@end
