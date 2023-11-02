
@interface PXContentSyndicationSectionHeaderView : UIView <SLAttributionViewDelegate> {
    <PXContentSyndicationSectionHeaderViewDelegate> * _delegate;
    SLAttributionView * _socialLayerAttributionView;
    SLHighlight * _socialLayerHighlight;
    PXPhotosSectionHeaderLayoutSpec * _spec;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXContentSyndicationSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SLHighlight *socialLayerHighlight;
@property (nonatomic, retain) PXPhotosSectionHeaderLayoutSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 applyLayoutToSubviews:(bool)arg2;
- (void)_updatePillAlignmentWithTraitCollection:(id)arg1;
- (id)contextMenuItemsForAttributionView:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setSocialLayerHighlight:(id)arg1;
- (void)setSpec:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)socialLayerHighlight;
- (id)spec;
- (void)traitCollectionDidChange:(id)arg1;

@end
