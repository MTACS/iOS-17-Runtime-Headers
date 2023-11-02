
@interface PXSharedLibraryIncludedPeopleTableViewCell : UITableViewCell {
    PXSharedLibraryIncludedPeopleDataSourceManager * _dataSourceManager;
    PXSharedLibraryIncludedPeopleViewController * _includedPeopleViewController;
}

@property (nonatomic, readonly) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager;

+ (double)heightForWidth:(double)arg1 numberOfItems:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)dataSourceManager;
- (id)initWithDataSourceManager:(id)arg1;
- (void)layoutSubviews;

@end
