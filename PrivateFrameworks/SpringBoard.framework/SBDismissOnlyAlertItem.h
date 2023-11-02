
@interface SBDismissOnlyAlertItem : SBAlertItem {
    NSString * _body;
    NSString * _title;
}

- (void).cxx_destruct;
- (id)bodyText;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)dismissButtonText;
- (id)initWithTitle:(id)arg1 body:(id)arg2;
- (void)performUnlockAction;
- (void)setBodyText:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)suppressForKeynote;
- (id)title;

@end
