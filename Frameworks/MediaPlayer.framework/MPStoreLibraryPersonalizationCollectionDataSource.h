
@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    struct vector<std::shared_ptr<mlcore::EntityCache>, std::allocator<std::shared_ptr<mlcore::EntityCache>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<mlcore::EntityCache> *, std::allocator<std::shared_ptr<mlcore::EntityCache>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _entityCaches;
    NSDictionary * _itemIndexPathToOverridePropertySet;
    MPPropertySet * _itemProperties;
    MPMediaLibraryView * _libraryView;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _relativeModelClassToMappingResponse;
    MPPropertySet * _sectionProperties;
    NSMutableDictionary * _sectionToLibraryAddedOverride;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *itemIndexPathToOverridePropertySet;
@property (nonatomic, copy) MPPropertySet *itemProperties;
@property (nonatomic, copy) MPMediaLibraryView *libraryView;
@property (nonatomic, copy) NSMapTable *relativeModelClassToMappingResponse;
@property (nonatomic, copy) MPPropertySet *sectionProperties;
@property (nonatomic, retain) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPSectionedCollection *unpersonalizedContentDescriptors;

+ (id)_completePersonalizedObjectWithLibraryObject:(id)arg1 personalizationProperties:(id)arg2 overrideLibraryAddedStatus:(long long)arg3;
+ (id)_lightweightPersonalizedLyricsWithUnpersonalizedLyrics:(id)arg1 libraryLyrics:(id)arg2 identifiers:(id)arg3 personalizationProperties:(id)arg4;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 identifiers:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 libraryPlaybackPosition:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)arg1 libraryAsset:(id)arg2 personalizationProperties:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::EntityCache> { struct EntityCache {} *x1; struct __shared_weak_count {} *x2; })_entityCacheForEntityClass:(void*)arg1 propertiesToFetch:(struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase {} **x1; struct ModelPropertyBase {} **x2; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase {} **x_3_1_1; } x3; })arg2;
- (id)_libraryObjectWithRelativeModelClass:(Class)arg1 identifierSet:(id)arg2 propertySet:(id)arg3;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemIndexPathToOverridePropertySet;
- (id)itemProperties;
- (id)libraryView;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)relativeModelClassToMappingResponse;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionProperties;
- (id)sectionToLibraryAddedOverride;
- (void)setItemIndexPathToOverridePropertySet:(id)arg1;
- (void)setItemProperties:(id)arg1;
- (void)setLibraryView:(id)arg1;
- (void)setRelativeModelClassToMappingResponse:(id)arg1;
- (void)setSectionProperties:(id)arg1;
- (void)setSectionToLibraryAddedOverride:(id)arg1;
- (void)setUnpersonalizedContentDescriptors:(id)arg1;
- (id)unpersonalizedContentDescriptors;

@end
