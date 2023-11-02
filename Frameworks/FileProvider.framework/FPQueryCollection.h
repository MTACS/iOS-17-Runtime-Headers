
@interface FPQueryCollection : FPItemCollection <FPSpotlightDataSourceDelegate> {
    NSString * _descriptionName;
    Class  _descriptorClass;
    bool  _isFetchingAssertion;
    unsigned long long  _itemsOrigin;
    NSPredicate * _predicate;
    FPQueryEnumerationSettings * _settings;
}

@property (copy) NSArray *allowedFileTypes;
@property (copy) NSArray *allowedProviderIdentifiers;
@property (copy) NSString *descriptionName;
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *excludedFileTypes;
@property (nonatomic, readonly) unsigned long long itemsOrigin;
@property (readonly) unsigned long long lastForcedUpdate;
@property (readonly) NSPredicate *predicate;
@property (readonly) FPQueryEnumerationSettings *settings;
@property (copy) NSString *tagIdentifier;

+ (void)disableMountPointQueries;
+ (void)enableMountPointQueries;
+ (void)resumeAllQueries;
+ (void)suspendAllQueries;

- (void).cxx_destruct;
- (id)_createDescriptorWithSortDescriptors:(id)arg1;
- (id)_enumerationSettingsPredicate;
- (id)allowedFileTypes;
- (id)allowedProviderIdentifiers;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (void)dataSource:(id)arg1 didChangeItemsOrigin:(unsigned long long)arg2;
- (id)description;
- (id)descriptionName;
- (id)desiredNumberOfItems;
- (id)excludedFileTypes;
- (id)initWithQueryDescriptorClass:(Class)arg1;
- (id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2;
- (id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2 paced:(bool)arg3;
- (unsigned long long)itemsOrigin;
- (id)predicate;
- (id)scopedSearchQuery;
- (void)setAllowedFileTypes:(id)arg1;
- (void)setAllowedProviderIdentifiers:(id)arg1;
- (void)setDescriptionName:(id)arg1;
- (void)setDesiredNumberOfItems:(id)arg1;
- (void)setExcludedFileTypes:(id)arg1;
- (void)setTagIdentifier:(id)arg1;
- (id)settings;
- (id)tagIdentifier;
- (id)underlyingQueryStringForMountPoint:(id)arg1;

@end
