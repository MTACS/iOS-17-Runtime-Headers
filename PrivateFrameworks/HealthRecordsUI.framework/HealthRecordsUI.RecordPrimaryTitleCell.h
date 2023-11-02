
@interface HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell {
    void recordDateLabel;
    void recordTitleLabel;
}

@property (nonatomic, readonly) UILabel *recordDateLabel;
@property (nonatomic, readonly) UILabel *recordTitleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)recordDateLabel;
- (id)recordTitleLabel;

@end
