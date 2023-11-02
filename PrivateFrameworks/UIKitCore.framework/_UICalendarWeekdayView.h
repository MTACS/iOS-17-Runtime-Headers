
@interface _UICalendarWeekdayView : UIView {
    _UICalendarDataModel * _dataModel;
    struct { 
        bool rebuildLabels; 
    }  _flags;
    NSArray * _labels;
    double  _preferredLabelWidth;
    _UIDatePickerLinkedLabel * _sizingLabel;
}

@property (nonatomic, readonly) _UICalendarDataModel *dataModel;
@property (nonatomic) double preferredLabelWidth;
@property (nonatomic, readonly) _UIDatePickerLinkedLabel *sizingLabel;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_rebuildLabels;
- (void)_setNeedsRebuildLabels;
- (void)_updateFont;
- (id)dataModel;
- (void)didUpdateCalendar;
- (void)didUpdateFontDesign;
- (void)didUpdateLocale;
- (id)initWithDataModel:(id)arg1;
- (void)layoutSubviews;
- (double)preferredLabelWidth;
- (void)setPreferredLabelWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sizingLabel;

@end
