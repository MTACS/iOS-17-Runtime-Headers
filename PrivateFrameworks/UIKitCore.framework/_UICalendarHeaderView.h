
@interface _UICalendarHeaderView : UIView <UIPointerInteractionDelegate> {
    UIImageView * _chevron;
    _UICalendarDataModel * _dataModel;
    <_UICalendarHeaderViewDelegate> * _delegate;
    bool  _expanded;
    NSDateFormatter * _longFormatter;
    UIView * _monthYearContainer;
    _UIDatePickerLinkedLabel * _monthYearLabel;
    UIButton * _nextMonthButton;
    UIButton * _previousMonthButton;
    NSDateFormatter * _shortFormatter;
}

@property (nonatomic, retain) _UICalendarDataModel *dataModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICalendarHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustMonth:(id)arg1;
- (void)_didTap:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupDateFormatter;
- (void)_setupViewHierarchy;
- (void)_updateFont;
- (void)_updateMonthButtonEnablement;
- (void)_updateMonthButtonVisibility;
- (void)_updateMonthYearLabel;
- (id)dataModel;
- (id)delegate;
- (void)didMoveToWindow;
- (void)didUpdateCalendar;
- (void)didUpdateDateRange;
- (void)didUpdateFontDesign;
- (void)didUpdateLocale;
- (void)didUpdateTimeZone;
- (void)didUpdateVisibleMonth;
- (id)initWithDataModel:(id)arg1 delegate:(id)arg2;
- (bool)isExpanded;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setDataModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;

@end
