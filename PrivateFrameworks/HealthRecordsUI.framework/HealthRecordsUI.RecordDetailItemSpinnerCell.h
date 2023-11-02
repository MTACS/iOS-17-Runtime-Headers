
@interface HealthRecordsUI.RecordDetailItemSpinnerCell : UITableViewCell {
    void bodyLabel;
    void spinner;
    void titleLabel;
}

@property (nonatomic, readonly) UILabel *bodyLabel;
@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)bodyLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)spinner;
- (id)titleLabel;

@end
