
@interface CPSHairlineBorderedView : UIView {
    NSLayoutConstraint * _bottomConstraint;
    UIView * _contentView;
}

@property (nonatomic, readonly) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (id)bottomConstraint;
- (id)contentView;
- (id)initWithContentView:(id)arg1 borderEdges:(unsigned long long)arg2;

@end
