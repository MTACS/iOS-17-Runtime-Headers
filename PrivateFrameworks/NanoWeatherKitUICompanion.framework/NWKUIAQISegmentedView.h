
@interface NWKUIAQISegmentedView : UIView {
    struct { 
        double width; 
    }  _constraints;
    double  _lastLayoutHeight;
    NWKUIAQISegmentedModel * _model;
    NSArray * _segmentViews;
}

@property (readonly) NWKUIAQISegmentedModel *model;

- (void).cxx_destruct;
- (void)_addSubviewsFromModel:(id)arg1;
- (id)initWithModel:(id)arg1 constraints:(struct { double x1; })arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)model;
- (void)updateModel:(id)arg1;

@end
