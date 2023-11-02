
@interface GKColorPalette : NSObject

@property (readonly) UIColor *activityIndicatorColor;
@property (readonly) UIColor *cellActionColor;
@property (readonly) UIColor *cellActionDestructiveColor;
@property (readonly) UIColor *challengesTintColor;
@property (readonly) UIColor *disabledButtonTitleColor;
@property (readonly) UIColor *disabledTextColor;
@property (readonly) UIColor *emphasizedTextColor;
@property (readonly) UIColor *emphasizedTextOnDarkBackgroundColor;
@property (readonly) UIColor *floatingHeaderViewBackgroundColor;
@property (readonly) UIColor *friendRequestCaptionTintColor;
@property (readonly) UIColor *friendRequestTintColor;
@property (readonly) UIColor *friendTintColor;
@property (readonly) UIColor *localPlayerTintColor;
@property (readonly) UIColor *opaqueViewBackgroundColor;
@property (readonly) UIColor *pinnedHeaderViewBackgroundColor;
@property (readonly) UIColor *primaryTextColor;
@property (readonly) UIColor *removeItemTextColor;
@property (readonly) UIColor *selectedCellBackgroundColor;
@property (readonly) UIColor *selectedTextColor;
@property (readonly) UIColor *separatorLineColor;
@property (readonly) UIColor *shareTintColor;
@property (readonly) UIColor *standardTextColor;
@property (readonly) UIColor *systemInteractionColor;
@property (readonly) UIColor *textOnDarkBackgroundColor;
@property (readonly) UIColor *viewBackgroundColor;
@property (readonly) long long windowBackgroundBlurStyle;
@property (readonly) UIColor *windowBackgroundColor;

+ (id)paletteFromImage:(id)arg1;
+ (id)sharedPalette;

- (id)activityIndicatorColor;
- (id)cellActionColor;
- (id)cellActionDestructiveColor;
- (id)challengesTintColor;
- (id)disabledButtonTitleColor;
- (id)disabledTextColor;
- (id)emphasizedTextColor;
- (id)emphasizedTextOnDarkBackgroundColor;
- (id)floatingHeaderViewBackgroundColor;
- (id)friendRequestCaptionTintColor;
- (id)friendRequestTintColor;
- (id)friendTintColor;
- (id)localPlayerTintColor;
- (id)opaqueViewBackgroundColor;
- (id)pinnedHeaderViewBackgroundColor;
- (id)primaryTextColor;
- (id)removeItemTextColor;
- (id)selectedCellBackgroundColor;
- (id)selectedTextColor;
- (id)separatorLineColor;
- (id)shareTintColor;
- (id)standardTextColor;
- (id)systemInteractionColor;
- (id)textOnDarkBackgroundColor;
- (id)viewBackgroundColor;
- (long long)windowBackgroundBlurStyle;
- (id)windowBackgroundColor;

@end
