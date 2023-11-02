
@interface SFCapsuleCollectionViewBorrowedContentView : UIView <SFCapsuleCollectionViewAlternateToolbarContent> {
    UIView * _contentView;
    bool  _resizesFromOriginalToolbarFrame;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool resizesFromOriginalToolbarFrame;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)resizesFromOriginalToolbarFrame;
- (void)setResizesFromOriginalToolbarFrame:(bool)arg1;

@end
