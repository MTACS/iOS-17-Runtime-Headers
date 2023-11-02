
@interface EKUIClearButtonCell : EKUITableViewCell {
    UIButton * _clearButton;
    NSArray * _constraints;
    UIListContentView * _listContentView;
}

@property (nonatomic, readonly) UIButton *clearButton;

- (void).cxx_destruct;
- (void)_updateConfigurationNumLines:(id)arg1;
- (void)_updateConstraints;
- (id)clearButton;
- (id)configuration;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTitleSubtitleContentConfiguration:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
