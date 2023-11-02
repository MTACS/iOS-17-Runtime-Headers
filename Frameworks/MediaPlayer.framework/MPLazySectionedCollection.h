
@interface MPLazySectionedCollection : MPSectionedCollection {
    <MPLazySectionedCollectionDataSource> * _dataSource;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    _MPLazySectionedCollectionStorage * _storage;
}

@property (nonatomic, retain) <MPLazySectionedCollectionDataSource> *dataSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_safeStateDumpObject;
- (id)allItems;
- (id)allSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)firstItem;
- (id)firstSection;
- (bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (id)lastItem;
- (id)lastSection;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)arg1;
- (void)setDataSource:(id)arg1;

@end
