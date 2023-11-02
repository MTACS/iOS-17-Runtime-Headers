
@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate> {
    UITableViewCell * _cell;
    NSString * _prefillTitle;
    bool  _showHeader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *prefillTitle;
@property (nonatomic) bool showHeader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)headerTitle;
- (id)prefillTitle;
- (void)reset;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setPrefillTitle:(id)arg1;
- (void)setShowHeader:(bool)arg1;
- (bool)showHeader;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;

@end
