
@interface PXCMMImageView : UIView <PXChangeObserver> {
    UIView * _highlightView;
    PXImageRequesterHelper * _imageRequesterHelper;
    UIImageView * _imageView;
    PXCMMImageViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXCMMImageViewModel *viewModel;

- (void).cxx_destruct;
- (void)_updateContentsRect;
- (void)_updateHighlighted;
- (void)_updateImage;
- (void)_updateImageRequestHelper;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (bool)test_highlighted;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewModel;

@end
