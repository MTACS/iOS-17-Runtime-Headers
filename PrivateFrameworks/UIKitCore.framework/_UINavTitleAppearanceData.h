
@interface _UINavTitleAppearanceData : _UIBarAppearanceData {
    NSDictionary * _largeTitleTextAttributes;
    _UINavigationBarTitleFontProvider * _titleFontProvider;
    long long  _titleFontProviderIdiom;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _titlePositionAdjustment;
    NSDictionary * _titleTextAttributes;
}

@property (nonatomic, copy) NSDictionary *largeTitleTextAttributes;
@property (nonatomic) struct UIOffset { double x1; double x2; } titlePositionAdjustment;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardTitleDataForIdiom:(long long)arg1;

- (void).cxx_destruct;
- (bool)checkEqualTo:(id)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (long long)hashInto:(long long)arg1;
- (id)largeTitleTextAttributes;
- (id)replicate;
- (void)setLargeTitleTextAttributes:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (id)titleTextAttributes;

@end
