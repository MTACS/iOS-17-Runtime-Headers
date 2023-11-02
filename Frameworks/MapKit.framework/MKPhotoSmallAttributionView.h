
@interface MKPhotoSmallAttributionView : UIView {
    UIView * _backgroundView;
    _MKUILabel * _label;
    struct CGSize { 
        double width; 
        double height; 
    }  _labelSize;
}

- (void).cxx_destruct;
- (id)attributionFont;
- (id)initWithMapItem:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;

@end
