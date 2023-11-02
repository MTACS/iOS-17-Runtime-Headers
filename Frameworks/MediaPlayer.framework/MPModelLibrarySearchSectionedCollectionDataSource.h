
@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPLibraryObjectDatabase * _lod;
    MPModelLibrarySearchRequest * _request;
    NSArray * _resultContainers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPModelLibrarySearchRequest *request;
@property (nonatomic, readonly, copy) NSArray *resultContainers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasMoreResultsForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)initWithEntitiesQueryResultContainers:(id)arg1 libraryObjectDatabase:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)request;
- (id)resultContainers;
- (long long)searchWeightForIndexPath:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;

@end
