
@interface MPCModelStorePlaybackItemsRequestAccumulation : NSObject <MPLazySectionedCollectionDataSource> {
    NSDictionary * _equivalencyMapping;
    MPLibraryObjectDatabase * _libraryObjectDatabase;
    ICURLAggregatedPerformanceMetrics * _performanceMetrics;
    MPPropertySet * _personalizationProperties;
    MPSectionedCollection * _progressiveResults;
    MPPropertySet * _properties;
    MPSectionedCollection * _requestedSectionedModelObjects;
    <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> * _trustID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *equivalencyMapping;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPLibraryObjectDatabase *libraryObjectDatabase;
@property (nonatomic, readonly) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (nonatomic, readonly, copy) MPSectionedCollection *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)equivalencyMapping;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)initWithProgressiveResults:(id)arg1 equivalencyMapping:(id)arg2 request:(id)arg3 libraryObjectDatabase:(id)arg4 performanceMetrics:(id)arg5;
- (id)itemAtIndexPath:(id)arg1;
- (id)libraryObjectDatabase;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)performanceMetrics;
- (id)results;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end
