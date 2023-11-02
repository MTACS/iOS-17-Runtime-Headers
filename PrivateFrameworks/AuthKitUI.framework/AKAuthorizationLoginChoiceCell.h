
@interface AKAuthorizationLoginChoiceCell : UITableViewCell {
    AKAuthorizationLoginChoice * _loginChoice;
}

@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) AKAuthorizationLoginChoice *loginChoice;

- (void).cxx_destruct;
- (void)_setupContent;
- (void)_setupFormat;
- (id)iconImage;
- (id)initWithLoginChoice:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)loginChoice;
- (void)setIconImage:(id)arg1;
- (void)setLoginChoice:(id)arg1;

@end
