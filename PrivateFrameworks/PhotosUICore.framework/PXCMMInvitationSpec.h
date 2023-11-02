
@interface PXCMMInvitationSpec : NSObject {
    long long  _layoutVariant;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) double bulletSize;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) double insets;
@property (nonatomic, readonly) long long layoutVariant;
@property (nonatomic, readonly) UIColor *posterTitleColor;
@property (nonatomic, readonly) UIFont *posterTitleFont;
@property (nonatomic, readonly) long long posterTitleTextStyle;
@property (nonatomic, readonly) UIColor *subtitle1Color;
@property (nonatomic, readonly) UIFont *subtitle1Font;
@property (nonatomic, readonly) long long subtitle1TextStyle;
@property (nonatomic, readonly) UIColor *subtitle2Color;
@property (nonatomic, readonly) UIFont *subtitle2Font;
@property (nonatomic, readonly) long long subtitle2TextStyle;
@property (nonatomic, readonly) double subtitleSpacing;
@property (nonatomic, readonly) UIColor *titleBulletColor;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly) UIFont *titleEmphasizedFont;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) double titleSpacing;
@property (nonatomic, readonly) long long titleTextStyle;
@property (nonatomic, readonly) double verticalPadding;

+ (id)specForLayoutVariant:(long long)arg1;

- (id)_initWithLayoutVariant:(long long)arg1;
- (double)aspectRatio;
- (double)bulletSize;
- (double)cornerRadius;
- (id)init;
- (double)insets;
- (long long)layoutVariant;
- (id)posterTitleColor;
- (id)posterTitleFont;
- (long long)posterTitleTextStyle;
- (id)subtitle1Color;
- (id)subtitle1Font;
- (long long)subtitle1TextStyle;
- (id)subtitle2Color;
- (id)subtitle2Font;
- (long long)subtitle2TextStyle;
- (double)subtitleSpacing;
- (id)titleBulletColor;
- (id)titleColor;
- (id)titleEmphasizedFont;
- (id)titleFont;
- (double)titleSpacing;
- (long long)titleTextStyle;
- (double)verticalPadding;

@end
