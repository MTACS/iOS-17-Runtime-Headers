
@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage {
    UIColor * _badgeColor;
    NSMutableDictionary * _badgeTextAttributesForState;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _titleOffset;
}

@property (nonatomic, copy) UIColor *badgeColor;
@property (nonatomic) struct UIOffset { double x1; double x2; } titleOffset;

- (void).cxx_destruct;
- (id)badgeColor;
- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (void)enumerateBadgeTextAttributesWithBlock:(id /* block */)arg1;
- (void)setBadgeColor:(id)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleOffset:(struct UIOffset { double x1; double x2; })arg1;
- (struct UIOffset { double x1; double x2; })titleOffset;

@end
