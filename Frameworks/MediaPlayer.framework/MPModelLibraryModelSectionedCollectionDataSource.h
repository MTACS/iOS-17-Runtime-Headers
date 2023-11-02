
@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> { 
        struct __tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>, std::allocator<std::__value_type<long long, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
    struct vector<long long, std::allocator<long long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::allocator<long long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _allowedSectionPersistentIDs;
    struct shared_ptr<std::map<long long, std::shared_ptr<mlcore::EntityQueryResult>>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _itemEntityQueryResults;
    MPMediaLibraryEntityTranslationContext * _itemTranslationContext;
    MPModelLibraryRequest * _request;
    struct shared_ptr<mlcore::EntityQueryResult> { 
        struct EntityQueryResult {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sectionEntityQueryResult;
    MPMediaLibraryEntityTranslationContext * _sectionTranslationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{shared_ptr<std::map<long long' */ struct  itemEntityQueryResults; /* unknown property attribute:  std::shared_ptr<mlcore::EntityQueryResult>>>=^v^{__shared_weak_count}} */
@property (nonatomic, readonly) MPModelLibraryRequest *request;
@property (nonatomic, readonly) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; } sectionEntityQueryResult;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_adjustedIndexForSectionIndex:(long long)arg1;
- (bool)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (void)_populateIndexMap;
- (bool)hasSameContentAsDataSource:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)initWithRequest:(id)arg1 sectionQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })arg2 itemQueryResults:(void*)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (struct shared_ptr<std::map<long long, std::shared_ptr<mlcore::EntityQueryResult>>> { void *x1; struct __shared_weak_count {} *x2; })itemEntityQueryResults;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)request;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })sectionEntityQueryResult;

@end
