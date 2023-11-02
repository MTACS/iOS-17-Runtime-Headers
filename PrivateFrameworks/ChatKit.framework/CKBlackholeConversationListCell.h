
@interface CKBlackholeConversationListCell : UITableViewCell {
    UIDateLabel * _dateLabel;
    UILabel * _fromLabel;
}

@property (nonatomic, retain) UIDateLabel *dateLabel;
@property (nonatomic, retain) UILabel *fromLabel;

- (void).cxx_destruct;
- (void)configureForConversation:(id)arg1;
- (id)dateLabel;
- (id)fromLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setDateLabel:(id)arg1;
- (void)setFromLabel:(id)arg1;

@end
