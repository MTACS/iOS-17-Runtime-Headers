
@interface CPSTableViewHeaderFooterView : UITableViewHeaderFooterView {
    NSUUID * _identifier;
    long long  _sectionIndex;
}

@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) long long sectionIndex;

- (void).cxx_destruct;
- (id)identifier;
- (long long)sectionIndex;
- (void)setIdentifier:(id)arg1;
- (void)setSectionIndex:(long long)arg1;

@end
