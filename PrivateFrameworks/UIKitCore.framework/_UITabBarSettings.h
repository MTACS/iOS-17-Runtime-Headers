
@interface _UITabBarSettings : PTSettings {
    bool  _highlightSystemItems;
    bool  _showAlignmentGuides;
}

@property (nonatomic) bool highlightSystemItems;
@property (nonatomic) bool showAlignmentGuides;

+ (id)settingsControllerModule;

- (bool)highlightSystemItems;
- (void)setDefaultValues;
- (void)setHighlightSystemItems:(bool)arg1;
- (void)setShowAlignmentGuides:(bool)arg1;
- (bool)showAlignmentGuides;

@end
