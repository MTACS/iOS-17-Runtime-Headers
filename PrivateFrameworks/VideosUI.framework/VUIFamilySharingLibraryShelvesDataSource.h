
@interface VUIFamilySharingLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate> {
    VUIFamilyMember * _familyMember;
    NSMutableSet * _fetchedDataSources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIFamilyMember *familyMember;
@property (nonatomic, retain) NSMutableSet *fetchedDataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceForShelves;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)dealloc;
- (id)familyMember;
- (id)fetchedDataSources;
- (id)initWithValidShelfTypes:(id)arg1 withFamilyMember:(id)arg2;
- (void)setFamilyMember:(id)arg1;
- (void)setFetchedDataSources:(id)arg1;
- (void)startFetch;

@end
