
@interface CNBadgingAvatarBadgeStyleSettings : NSObject {
    UIColor * _backgroundColor;
    UIColor * _color;
    long long  _contentMode;
    long long  _cropStyle;
    long long  _position;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long cropStyle;
@property (nonatomic) long long position;

+ (unsigned long long)cnuiBadgeCropStyle:(long long)arg1;
+ (long long)cnuiBadgePosition:(long long)arg1;
+ (id)doNotDisturbBadgeSettings;
+ (id)markedForSyndicationBadgeSettings;

- (void).cxx_destruct;
- (id)backgroundColor;
- (long long)cnuiBadgePosition;
- (unsigned long long)cnuiCropStyle;
- (id)color;
- (long long)contentMode;
- (long long)cropStyle;
- (id)init;
- (id)initWithPosition:(long long)arg1 color:(id)arg2 backgroundColor:(id)arg3 cropStyle:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)position;
- (void)setBackgroundColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCropStyle:(long long)arg1;
- (void)setPosition:(long long)arg1;

@end
