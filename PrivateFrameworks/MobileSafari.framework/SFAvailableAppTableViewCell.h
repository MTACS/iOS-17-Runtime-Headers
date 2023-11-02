
@interface SFAvailableAppTableViewCell : UITableViewCell {
    ASCLockupView * _lockupView;
    UIStackView * _stackView;
}

@property (nonatomic, retain) ASCLockupView *lockupView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)lockupView;
- (void)setLockupView:(id)arg1;

@end
