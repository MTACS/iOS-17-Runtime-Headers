
@interface SLCollaborationAttributionView : SLRemoteView {
    void automaticallyAdjustsMaxWidthToFitBounds;
    void delegate;
    void highlight;
    void placeholderGlyphConfiguration;
    void remoteContentDidLoad;
    void title;
    void variant;
}

@property (nonatomic) bool automaticallyAdjustsMaxWidthToFitBounds;
@property (nonatomic) <SLCollaborationAttributionViewDelegate> *delegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (bool)automaticallyAdjustsMaxWidthToFitBounds;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithHighlight:(id)arg1 variant:(long long)arg2;
- (id)initWithServiceProxyClass:(Class)arg1 maxWidth:(double)arg2;
- (id)initWithVariant:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)makePlaceholderSlotContentForStyle:(id)arg1;
- (void)remoteContentIsLoadedValueChanged;
- (void)renderRemoteContentForLayerContextID:(long long)arg1 style:(id)arg2 yield:(id /* block */)arg3;
- (void)setAutomaticallyAdjustsMaxWidthToFitBounds:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePlaceHolderSymbolScale:(long long)arg1 weight:(long long)arg2 pointSize:(double)arg3;

@end
