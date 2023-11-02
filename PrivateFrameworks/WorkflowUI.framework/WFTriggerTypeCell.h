
@interface WFTriggerTypeCell : UITableViewCell {
    WFTrigger * _trigger;
    UILabel * _triggerDescriptionLabel;
    UIImageView * _triggerIconView;
    UILabel * _triggerTitleLabel;
    Class  _triggerTypeClass;
}

@property (nonatomic, retain) WFTrigger *trigger;
@property (nonatomic, readonly) UILabel *triggerDescriptionLabel;
@property (nonatomic, readonly) UIImageView *triggerIconView;
@property (nonatomic, readonly) UILabel *triggerTitleLabel;
@property (nonatomic, retain) Class triggerTypeClass;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setTrigger:(id)arg1;
- (void)setTriggerTypeClass:(Class)arg1;
- (id)trigger;
- (id)triggerDescriptionLabel;
- (id)triggerIconView;
- (id)triggerTitleLabel;
- (Class)triggerTypeClass;
- (void)updateUI;

@end
