
@interface CKPinnedConversationDropTargetCollectionViewCell : UICollectionViewCell {
    CKDropZoneCircleView * _dropZoneCircleView;
    UILabel * _instructionLabel;
    long long  _layoutStyle;
    CKPinnedConversationView * _prototypeConversationView;
    bool  _shouldAnimateCircle;
    bool  _shouldHideLabel;
}

@property (nonatomic, retain) CKDropZoneCircleView *dropZoneCircleView;
@property (nonatomic, retain) UILabel *instructionLabel;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, retain) CKPinnedConversationView *prototypeConversationView;
@property (nonatomic) bool shouldAnimateCircle;
@property (nonatomic) bool shouldHideLabel;

+ (id)reuseIdentifier;
+ (id)uniqueIdentifier;
+ (id)uniqueIdentifierForDropTargetAtItemIndex:(long long)arg1;

- (void).cxx_destruct;
- (void)_updateFont;
- (void)_updateInstructionLabelColor;
- (id)dropZoneCircleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructionLabel;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)prototypeConversationView;
- (void)setDropZoneCircleView:(id)arg1;
- (void)setInstructionLabel:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setPrototypeConversationView:(id)arg1;
- (void)setShouldAnimateCircle:(bool)arg1;
- (void)setShouldHideLabel:(bool)arg1;
- (bool)shouldAnimateCircle;
- (bool)shouldHideLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
