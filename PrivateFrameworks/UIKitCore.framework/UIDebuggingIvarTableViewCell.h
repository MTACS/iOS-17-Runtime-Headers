
@interface UIDebuggingIvarTableViewCell : UITableViewCell {
    UIDebuggingIvar * _ivar;
    UILabel * _nameLabel;
    UILabel * _typeLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) UIDebuggingIvar *ivar;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *typeLabel;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_prepareConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)ivar;
- (id)nameLabel;
- (void)prepareForReuse;
- (void)setIvar:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setTypeLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (id)typeLabel;
- (id)valueLabel;

@end
