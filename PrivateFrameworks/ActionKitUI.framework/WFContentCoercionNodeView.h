
@interface WFContentCoercionNodeView : UIView {
    UILabel * _nameLabel;
    WFContentCoercionNode * _node;
    CAShapeLayer * _outlineLayer;
}

@property (nonatomic) UILabel *nameLabel;
@property (nonatomic, retain) WFContentCoercionNode *node;
@property (nonatomic) CAShapeLayer *outlineLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isRootNode:(bool)arg2;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)node;
- (id)outlineLayer;
- (void)setNameLabel:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setOutlineLayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColors;

@end
