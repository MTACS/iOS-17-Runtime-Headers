
@interface PXChangePersonAssetsSortOrderAction : PXPhotosAction {
    long long  _originalSortOrder;
    PHPerson * _person;
    long long  _sortOrder;
}

@property (nonatomic, readonly) long long originalSortOrder;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) long long sortOrder;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)initWithPerson:(id)arg1 sortOrder:(long long)arg2;
- (long long)originalSortOrder;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)person;
- (long long)sortOrder;

@end
