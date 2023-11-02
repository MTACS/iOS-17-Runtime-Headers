
@interface HUQuickControlWheelPickerViewProfile : HUQuickControlViewProfile {
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    double  _selectedRowBorderWidth;
    double  _selectedRowCornerRadius;
    bool  _showOffState;
    bool  _sizeToFitTextWidth;
    unsigned long long  _style;
    bool  _uppercaseRowTitles;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double selectedRowBorderWidth;
@property (nonatomic) double selectedRowCornerRadius;
@property (nonatomic) bool showOffState;
@property (nonatomic) bool sizeToFitTextWidth;
@property (nonatomic) unsigned long long style;
@property (nonatomic) bool uppercaseRowTitles;

- (void).cxx_destruct;
- (void)_setDefaultStyleProperties;
- (void)_setMultiStateStyleProperties;
- (id)borderColor;
- (double)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)init;
- (double)selectedRowBorderWidth;
- (double)selectedRowCornerRadius;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setSelectedRowBorderWidth:(double)arg1;
- (void)setSelectedRowCornerRadius:(double)arg1;
- (void)setShowOffState:(bool)arg1;
- (void)setSizeToFitTextWidth:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setUppercaseRowTitles:(bool)arg1;
- (bool)showOffState;
- (bool)sizeToFitTextWidth;
- (unsigned long long)style;
- (bool)uppercaseRowTitles;

@end
