
@interface CNUIAvatarLayoutManager : NSObject

+ (void)applyAvatarBadgeStylingToLayer:(id)arg1 badgeType:(unsigned long long)arg2;
+ (id)avatarBadgeLayerForAvatarInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 badgeType:(unsigned long long)arg2 isRTL:(bool)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarBadgeRectForAvatarInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 badgeType:(unsigned long long)arg2 isRTL:(bool)arg3;
+ (id)avatarViewLayoutConfigurationsDictionaryForType:(unsigned long long)arg1;
+ (id)avatarViewLayoutConfigurationsForType:(unsigned long long)arg1;
+ (id)avatarViewLayoutItemConfigurations:(id)arg1;
+ (void)cropAvatarBadgeLayer:(id)arg1 withCropStyle:(unsigned long long)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBadgeWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onAvatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPosition:(long long)arg3 mediaContextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 isRTL:(bool)arg5;
+ (id)identifierForLayoutType:(unsigned long long)arg1;
+ (id)layoutConfigurationsForType:(unsigned long long)arg1 withItemCount:(long long)arg2;
+ (long long)maxAvatarCountForType:(unsigned long long)arg1;

@end
