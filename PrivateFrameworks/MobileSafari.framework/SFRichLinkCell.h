
@interface SFRichLinkCell : UICollectionViewCell <WBSStartPageRichLinkProxy> {
    SLAttributionView * _attributionView;
    SLHighlight * _highlight;
    UIVisualEffectView * _linkBackgroundView;
    LPLinkView * _linkView;
    UIView * _linkViewContainer;
}

@property (nonatomic, retain) SLAttributionView *attributionView;
@property (nonatomic, retain) _UIVisualEffectBackdropView *backdropCaptureView;
@property (nonatomic, readonly) UIView *contextMenuPreviewView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SLHighlight *highlight;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateAttributionViewBackground;
- (id)attributionView;
- (id)backdropCaptureView;
- (id)contextMenuPreviewView;
- (id)highlight;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)metadata;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setAttributionView:(id)arg1;
- (void)setBackdropCaptureView:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (bool)shouldShowContextMenuFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
