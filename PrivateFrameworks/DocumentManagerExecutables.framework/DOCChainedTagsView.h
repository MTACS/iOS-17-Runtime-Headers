
@interface DOCChainedTagsView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _alignmentOffset;
    double  _knockOutBorderWidth;
    DOCTagRenderingRequest * _renderingRequest;
    UIColor * _selectionOutlineColor;
    unsigned long long  _spacing;
    double  _tagDimension;
    NSArray * _tags;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } alignmentOffset;
@property (nonatomic) double knockOutBorderWidth;
@property (nonatomic, retain) DOCTagRenderingRequest *renderingRequest;
@property (nonatomic, retain) UIColor *selectionOutlineColor;
@property (nonatomic) unsigned long long spacing;
@property (nonatomic) double tagDimension;
@property (nonatomic, retain) NSArray *tags;

- (void).cxx_destruct;
- (void)_reloadRenderingRequest;
- (struct CGPoint { double x1; double x2; })alignmentOffset;
- (void)doc_commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)knockOutBorderWidth;
- (id)renderingRequest;
- (id)selectionOutlineColor;
- (void)setAlignmentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKnockOutBorderWidth:(double)arg1;
- (void)setRenderingRequest:(id)arg1;
- (void)setSelectionOutlineColor:(id)arg1;
- (void)setSpacing:(unsigned long long)arg1;
- (void)setTagDimension:(double)arg1;
- (void)setTags:(id)arg1;
- (void)setknockOutBorderWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (unsigned long long)spacing;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (double)tagDimension;
- (id)tags;

@end
