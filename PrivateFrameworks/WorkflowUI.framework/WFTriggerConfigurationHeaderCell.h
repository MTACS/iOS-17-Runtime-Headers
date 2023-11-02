
@interface WFTriggerConfigurationHeaderCell : UITableViewCell {
    WFTrigger * _trigger;
    UIImageView * _triggerIconView;
    UILabel * _triggerTitleLabel;
    Class  _triggerTypeClass;
}

@property (nonatomic, retain) WFTrigger *trigger;
@property (nonatomic, readonly) UIImageView *triggerIconView;
@property (nonatomic, readonly) UILabel *triggerTitleLabel;
@property (nonatomic, retain) Class triggerTypeClass;

- (void).cxx_destruct;
- (void)configureWithImage:(id)arg1 tintColor:(id)arg2 title:(id)arg3 numberOfLines:(long long)arg4 withTrigger:(id)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setTrigger:(id)arg1;
- (void)setTriggerTypeClass:(Class)arg1;
- (id)trigger;
- (id)triggerIconView;
- (id)triggerTitleLabel;
- (Class)triggerTypeClass;
- (void)updateUI;

@end
