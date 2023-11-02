
@interface WBSStartPageSectionManager : NSObject {
    NSArray * _cachedSections;
    long long  _ignoreChanges;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<WBSStartPageSectionManagerStorage> * _storage;
}

@property (nonatomic, readonly, copy) NSArray *cloudKitStartPageSectionOrder;
@property (nonatomic, readonly) NSArray *enabledSectionIdentifiers;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (nonatomic, readonly, copy) NSArray *sections;

+ (id)allSections;
+ (id)defaultManager;

- (void).cxx_destruct;
- (id)cloudKitStartPageSectionOrder;
- (void)dealloc;
- (id)enabledSectionIdentifiers;
- (id)init;
- (id)initWithStorage:(id)arg1;
- (void)invalidateCache;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)resetToDefault;
- (void)saveSections:(id)arg1 andUpdateInMemoryCache:(bool)arg2;
- (id)sectionForIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (id)sections;
- (void)setSectionIdentifier:(id)arg1 enabled:(bool)arg2;
- (void)setSectionsIdentifiers:(id)arg1 enabledIndexes:(id)arg2;

@end
