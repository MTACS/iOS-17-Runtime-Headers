
@interface SBUIPluginAppearanceContext : NSObject {
    bool  _hideOtherWindowsDuringAppearance;
}

@property (nonatomic) bool hideOtherWindowsDuringAppearance;

- (bool)hideOtherWindowsDuringAppearance;
- (void)setHideOtherWindowsDuringAppearance:(bool)arg1;

@end
