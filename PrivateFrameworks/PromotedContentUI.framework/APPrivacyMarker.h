
@interface APPrivacyMarker : UIButton <APPCVisibilityIgnorable> {
    void markerLabel;
    void markerView;
    void minimumTappableSize;
    void privacyMarkerPosition;
    void privacyMarkerType;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)sizeCategoryChanged:(id)arg1;
- (void)systemColorStatusChanged:(id)arg1;

@end
