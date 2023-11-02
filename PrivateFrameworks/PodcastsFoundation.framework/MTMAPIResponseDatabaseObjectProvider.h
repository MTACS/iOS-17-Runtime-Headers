
@interface MTMAPIResponseDatabaseObjectProvider : NSObject <NSFetchedResultsControllerDelegate> {
    void databaseObjectsCache;
    void delegate;
    void episodesFRC;
    void needsParsing;
    void response;
    void showsFRC;
}

@property (nonatomic, retain) <_TtP18PodcastsFoundation42MAPIResponseDatabaseObjectProviderDelegate_> *delegate;

- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (id)databaseObjectWithStoreID:(long long)arg1 contentType:(long long)arg2;
- (id)delegate;
- (id)init;
- (id)initWithResponse:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
