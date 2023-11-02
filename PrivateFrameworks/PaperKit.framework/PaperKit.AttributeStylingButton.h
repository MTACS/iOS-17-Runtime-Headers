
@interface PaperKit.AttributeStylingButton : PaperKit.AttributeStylingControl

@property (nonatomic) bool selected;

- (id)initWithCoder:(id)arg1;
- (bool)isSelected;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)setSelected:(bool)arg1;

@end
