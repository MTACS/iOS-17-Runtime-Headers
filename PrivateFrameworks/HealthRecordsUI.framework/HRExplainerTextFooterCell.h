
@interface HRExplainerTextFooterCell : UITableViewCell {
    void content;
    void label;
}

@property (nonatomic, copy) NSString *content;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)content;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setContent:(id)arg1;

@end
