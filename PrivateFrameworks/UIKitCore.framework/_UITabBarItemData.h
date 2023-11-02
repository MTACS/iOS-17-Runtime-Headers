
@interface _UITabBarItemData : _UIBarAppearanceData {
    UIColor * _badgeBackgroundColor;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _badgePositionAdjustment;
    NSDictionary * _badgeTextAttributes;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _badgeTitlePositionAdjustment;
    UIColor * _iconColor;
    struct { 
        unsigned int hasUserTitleFont : 1; 
        unsigned int hasUserTitleColor : 1; 
        unsigned int hasUserTitlePosition : 1; 
        unsigned int hasUserIconColor : 1; 
        unsigned int hasUserBadgePosition : 1; 
        unsigned int hasUserBadgeBackgroundColor : 1; 
        unsigned int hasUserBadgeTitleFont : 1; 
        unsigned int hasUserBadgeTitleColor : 1; 
        unsigned int hasUserBadgeTitlePosition : 1; 
    }  _stateFlags;
    long long  _style;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _titlePositionAdjustment;
    NSDictionary * _titleTextAttributes;
}

@property (nonatomic, readonly) UIImageSymbolConfiguration *preferredSymbolConfiguration;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardItemDataForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_decodeBadgeBackgroundColorFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBadgePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBadgeTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeIconColorFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;
- (id)_fallbackBadgeTitleColorForState:(long long)arg1;
- (id)_fallbackBadgeTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)_fallbackTitleColorForState:(long long)arg1;
- (id)_fallbackTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)badgeBackgroundColorForState:(long long)arg1;
- (struct UIOffset { double x1; double x2; })badgePositionAdjustmentForState:(long long)arg1;
- (id)badgeTextAttributesForState:(long long)arg1;
- (id)badgeTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;
- (struct UIOffset { double x1; double x2; })badgeTitlePositionAdjustmentForState:(long long)arg1;
- (bool)checkEqualTo:(id)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (long long)hashInto:(long long)arg1;
- (id)iconColorForState:(long long)arg1;
- (id)preferredSymbolConfiguration;
- (id)replicate;
- (void)setBadgeBackgroundColor:(id)arg1 forState:(long long)arg2;
- (void)setBadgePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forState:(long long)arg2;
- (void)setBadgeTextAttributes:(id)arg1 forState:(long long)arg2;
- (void)setBadgeTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forState:(long long)arg2;
- (void)setIconColor:(id)arg1 forState:(long long)arg2;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forState:(long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForState:(long long)arg1;
- (id)titleTextAttributesForState:(long long)arg1;
- (id)titleTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;
- (bool)titleTextAttributesSpecifyColorForState:(long long)arg1;

@end
