
@interface PKDatePicker : UIView {
    NSCalendar * _calendar;
    NSDate * _date;
    <PKDatePickerDelegate> * _delegate;
    UIView<PKDatePickerInternalImplementationProtocol> * _internalPicker;
    NSLocale * _locale;
    bool  _showsDay;
    bool  _showsMonth;
    bool  _showsYear;
    unsigned long long  _style;
    bool  _usesDarkAppearance;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <PKDatePickerDelegate> *delegate;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) bool showsDay;
@property (nonatomic, readonly) bool showsMonth;
@property (nonatomic, readonly) bool showsYear;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic) bool usesDarkAppearance;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (Class)_classForDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 style:(unsigned long long)arg4;
- (void)_dateValueChanged:(id)arg1;
- (void)_forceReloadInternalPicker;
- (id)calendar;
- (id)date;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)locale;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)reconfigureToShowDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 style:(unsigned long long)arg4 locale:(id)arg5 calendar:(id)arg6;
- (void)setBackgroundColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUsesDarkAppearance:(bool)arg1;
- (bool)showsDay;
- (bool)showsMonth;
- (bool)showsYear;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (bool)usesDarkAppearance;

@end
