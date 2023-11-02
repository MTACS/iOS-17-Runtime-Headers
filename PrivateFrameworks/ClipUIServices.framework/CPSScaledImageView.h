
@interface CPSScaledImageView : UIImageView {
    bool  _needsUpdateScaledImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledImageSize;
    NSString * _textStyleForScaling;
}

@property (nonatomic, retain) NSString *textStyleForScaling;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setTextStyleForScaling:(id)arg1;
- (id)textStyleForScaling;
- (void)traitCollectionDidChange:(id)arg1;

@end
