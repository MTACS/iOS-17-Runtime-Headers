
@interface HUUnitPickerViewCell : HUPickerViewCell {
    NSAttributedString * _longestValue;
    struct CGSize { 
        double width; 
        double height; 
    }  _longestValueSize;
    UILabel * _unitLabel;
    NSString * _unitText;
}

@property (nonatomic, readonly) NSAttributedString *longestValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } longestValueSize;
@property (nonatomic, retain) UILabel *unitLabel;
@property (nonatomic, copy) NSString *unitText;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_estimatedSizeForAttributedString:(id)arg1;
- (id)effectiveUnitText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)longestValue;
- (struct CGSize { double x1; double x2; })longestValueSize;
- (void)prepareForReuse;
- (void)reloadPickerView;
- (void)setUnitLabel:(id)arg1;
- (void)setUnitText:(id)arg1;
- (id)unitLabel;
- (id)unitText;
- (void)updateUIWithAnimation:(bool)arg1;

@end
