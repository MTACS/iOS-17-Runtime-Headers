
@interface MPModelLibraryPlaylistEditDataSource : NSObject <MPSectionedIdentifierListDataSource> {
    <MPMutableIdentifierListSection> * _dataSourceSection;
    NSString * _identifier;
    NSDictionary * _playlistEntriesByIdentifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) <MPMutableIdentifierListSection> *dataSourceSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *playlistEntriesByIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleMPMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1;
- (void)_reloadWithCompletion:(id /* block */)arg1;
- (id)dataSourceSection;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)loadEntriesWithCompletion:(id /* block */)arg1;
- (id)newPlaylistEntryForTrack:(id)arg1;
- (id)playlistEntriesByIdentifier;
- (void)reload;
- (void)reloadSection:(id)arg1 completion:(id /* block */)arg2;

@end
