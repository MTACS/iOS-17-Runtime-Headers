
@interface _UIKeyShortcutHUDCellConfigurationState : UICellConfigurationState

@property (getter=isCategoryVisible, nonatomic) bool categoryVisible;
@property (nonatomic) bool drawsBackground;
@property (getter=isFlashing, nonatomic) bool flashing;

- (bool)drawsBackground;
- (id)initWithCellConfigurationState:(id)arg1;
- (bool)isCategoryVisible;
- (bool)isFlashing;
- (void)setCategoryVisible:(bool)arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setFlashing:(bool)arg1;

@end
