
@interface SLHighlightDisambiguationCell : UICollectionViewCell {
    SLAttribution * _attribution;
    SLHighlightDisambiguationPillView * _expandedAttributionView;
}

@property (nonatomic, readonly) SLAttribution *attribution;
@property (nonatomic, retain) SLHighlightDisambiguationPillView *expandedAttributionView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)attribution;
- (id)expandedAttributionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setExpandedAttributionView:(id)arg1;
- (void)updateWithAttribution:(id)arg1;

@end
