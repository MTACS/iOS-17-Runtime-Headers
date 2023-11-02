
@interface EKCalendarButtonEditItem : EKCalendarEditItem {
    SEL  _buttonAction;
    id  _buttonTarget;
    NSString * _buttonTitle;
    UITableViewCell * _cell;
}

@property (nonatomic, readonly) UIView *buttonView;

- (void).cxx_destruct;
- (id)buttonView;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setButtonTitle:(id)arg1;

@end
