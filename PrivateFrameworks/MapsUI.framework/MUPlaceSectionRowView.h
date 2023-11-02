
@interface MUPlaceSectionRowView : MKViewWithHairline <MUSelectable, UIEditMenuInteractionDelegate> {
    UIEditMenuInteraction * _editMenuInteraction;
    bool  _handlesHighlighting;
    bool  _selected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool handlesHighlighting;
@property (readonly) unsigned long long hash;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsInteractionMenuItems;

+ (id)rowViewWithContentView:(id)arg1;

- (void).cxx_destruct;
- (id)_createCopyAction;
- (id)_speechMenuElementFromSuggestedActions:(id)arg1;
- (void)_updateBackgroundColor:(bool)arg1;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (bool)handlesHighlighting;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)setHandlesHighlighting:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (bool)supportsInteractionMenuItems;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
