
@interface EKCalendarAccountEditItem : EKCalendarEditItem {
    bool  _editable;
    EKSource * _limitedToSource;
}

@property (nonatomic) bool editable;

- (void).cxx_destruct;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (bool)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;
- (bool)canAddCalendarToMoreThanOneAccount;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)currentSource;
- (bool)editable;
- (id)initLimitedToSource:(id)arg1;
- (void)setEditable:(bool)arg1;

@end
