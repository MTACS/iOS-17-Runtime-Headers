
@interface CNMeCardSharingPickerLayoutAttributes : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _avatarViewSize;
    double  _avatarViewToNamePadding;
    UIColor * _backgroundColor;
    UIFont * _headerFont;
    double  _topToAvatarPadding;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } avatarViewSize;
@property (nonatomic, readonly) double avatarViewToNamePadding;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIFont *headerFont;
@property (nonatomic, readonly) double topToAvatarPadding;

+ (id)buddyHeaderFont;
+ (id)layoutAttributesForBuddy;
+ (id)layoutAttributesForSettings;
+ (id)settingsHeaderFont;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })avatarViewSize;
- (double)avatarViewToNamePadding;
- (id)backgroundColor;
- (id)headerFont;
- (id)initWithTopToAvatarPadding:(double)arg1 headerFont:(id)arg2 avatarViewSize:(struct CGSize { double x1; double x2; })arg3 avatarViewToNamePadding:(double)arg4 backgroundColor:(id)arg5;
- (double)topToAvatarPadding;

@end
