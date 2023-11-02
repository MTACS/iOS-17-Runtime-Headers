
@interface WFNetworkListRow : UITableViewCell {
    void config;
}

@property (nonatomic, retain) WFNetworkRowConfig *config;

- (void).cxx_destruct;
- (id)config;
- (void)configure:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setConfig:(id)arg1;

@end
