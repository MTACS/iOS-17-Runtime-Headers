
@interface SBPhoneAlertItem : SBAlertItem {
    NSString * _bodyText;
    long long  _slot;
    NSString * _title;
}

@property (nonatomic, readonly) long long slot;

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithTitle:(id)arg1 bodyText:(id)arg2 slot:(long long)arg3;
- (long long)slot;

@end
