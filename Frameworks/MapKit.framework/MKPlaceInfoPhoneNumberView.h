
@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {
    bool  _optsOutOfAds;
    _MKUILabel * _optsOutOfAdsView;
}

@property (nonatomic) bool optsOutOfAds;

- (void).cxx_destruct;
- (id)_icon;
- (id)_iconAccessibilityLabel;
- (Class)_labeledValueExpectedValueType;
- (id)_valueString;
- (int)analyticsTarget;
- (id)draggableContent;
- (id)formatPhoneNumber:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)optsOutOfAds;
- (void)setOptsOutOfAds:(bool)arg1;

@end
