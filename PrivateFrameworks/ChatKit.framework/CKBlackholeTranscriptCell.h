
@interface CKBlackholeTranscriptCell : UITableViewCell {
    UILabel * _bodyLabel;
    UIDateLabel * _dateLabel;
    UILabel * _fromLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) UIDateLabel *dateLabel;
@property (nonatomic, retain) UILabel *fromLabel;

- (void).cxx_destruct;
- (id)bodyLabel;
- (void)configureForMessageItem:(id)arg1 showSender:(bool)arg2;
- (id)dateLabel;
- (id)fromLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setBodyLabel:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setFromLabel:(id)arg1;

@end
