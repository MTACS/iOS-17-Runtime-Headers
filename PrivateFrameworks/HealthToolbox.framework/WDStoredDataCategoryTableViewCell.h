
@interface WDStoredDataCategoryTableViewCell : UITableViewCell {
    HKDisplayCategory * _category;
    HKDisplayType * _displayType;
}

@property (retain) HKDisplayCategory *category;
@property (nonatomic, retain) HKDisplayType *displayType;

- (void).cxx_destruct;
- (id)category;
- (id)displayType;
- (void)setCategory:(id)arg1;
- (void)setDisplayType:(id)arg1;

@end
