
@interface SFSiteRowCell : UICollectionViewCell <WBSStartPageListItemProxy> {
    UIVisualEffectView * _backgroundEffectView;
    UILabel * _label;
}

@property (nonatomic, retain) _UIVisualEffectBackdropView *backdropCaptureView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)backdropCaptureView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackdropCaptureView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
