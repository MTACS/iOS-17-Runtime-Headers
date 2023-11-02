
@interface WFCoherenceDatabaseResult : WFDatabaseResult {
    WFLibraryQuery * _libraryQuery;
}

@property (nonatomic, readonly) WFLibraryQuery *libraryQuery;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDatabase:(id)arg1 libraryQuery:(id)arg2;
- (id)libraryQuery;
- (id)unsearchedDescriptorsWithError:(id*)arg1;

@end
