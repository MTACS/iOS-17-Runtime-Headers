
@interface STSummationView : UIView {
    UILabel * _detailLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)detailLabel;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2;
- (void)setDetailLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
