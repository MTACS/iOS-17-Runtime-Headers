
@interface PKPassTileGroupView : UIView {
    bool  _animated;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    NSArray * _content;
    NSArray * _contentByRows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _deferredSubviewUpdate;
    bool  _deferringUpdate;
    <PKPassTileGroupViewDelegate> * _delegate;
    NSArray * _effectiveContentByRows;
    bool  _effectiveSelectable;
    NSMutableArray * _itemViewsByRows;
    unsigned long long  _maximumRows;
    PKPass * _pass;
    bool  _selectable;
}

@property (nonatomic, readonly, copy) NSArray *content;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) <PKPassTileGroupViewDelegate> *delegate;
@property (nonatomic) unsigned long long maximumRows;
@property (nonatomic, readonly) PKPass *pass;

+ (void)extractSupportedVehicleFunction:(id*)arg1 action:(id*)arg2 forTile:(id)arg3 applicationIdentifier:(id)arg4 keyIdentifier:(id)arg5;

- (void).cxx_destruct;
- (void)_tileViewTapped:(id)arg1;
- (id)content;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (unsigned long long)maximumRows;
- (id)pass;
- (void)performBatchUpdates:(id /* block */)arg1 animated:(bool)arg2;
- (void)prepareForReuse;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumRows:(unsigned long long)arg1;
- (void)setMaximumRows:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setPass:(id)arg1 content:(id)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
