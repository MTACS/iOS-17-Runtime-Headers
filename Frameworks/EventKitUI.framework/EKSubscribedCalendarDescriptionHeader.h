
@interface EKSubscribedCalendarDescriptionHeader : UIView {
    UILabel * _label;
    double  _lastParentWidth;
}

- (void).cxx_destruct;
- (id)initWithParentWidth:(double)arg1;
- (id)initWithParentWidth:(double)arg1 showHolidayCalendarDescription:(bool)arg2;
- (bool)updateLayoutForWidth:(double)arg1;

@end
