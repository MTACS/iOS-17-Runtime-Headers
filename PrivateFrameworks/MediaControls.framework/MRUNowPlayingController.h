
@interface MRUNowPlayingController : NSObject <MRUEndpointControllerObserver, MRUMediaSuggestionsControllerDelegate, MRUMetadataControllerObserver, MRUNowPlayingQueueHandoffCoordinatorDelegate, MRUTVRemoteControllerDelegate> {
    MRUEndpointController * _endpointController;
    MRUMRMetadataDataSource * _handoffDataSource;
    MRUMediaSuggestionsController * _mediaSuggestionsController;
    MRUMetadataController * _metadataController;
    <MRUMetadataDataSource> * _metadataDataSource;
    NSHashTable * _observers;
    MRUNowPlayingQueueHandoffCoordinator * _queueHandoffCoordinator;
    MRUTransportControlItem * _quickControlItem;
    MRUTVRemoteController * _tvRemoteController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MRUEndpointController *endpointController;
@property (nonatomic, retain) MRUMRMetadataDataSource *handoffDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) MRUMediaSuggestionsController *mediaSuggestionsController;
@property (nonatomic, readonly) MRUMetadataController *metadataController;
@property (nonatomic, retain) <MRUMetadataDataSource> *metadataDataSource;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) MRUNowPlayingQueueHandoffCoordinator *queueHandoffCoordinator;
@property (nonatomic, readonly) MRUTransportControlItem *quickControlItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MRUTVRemoteController *tvRemoteController;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addSwiftObserver:(id)arg1;
- (id)endpointController;
- (void)endpointController:(id)arg1 didChangeRoute:(id)arg2;
- (void)endpointController:(id)arg1 didChangeState:(long long)arg2;
- (id)handoffDataSource;
- (id)identifier;
- (void)imageForRoute:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithEndpointController:(id)arg1;
- (id)mediaSuggestionsController;
- (void)mediaSuggestionsController:(id)arg1 didChangeMediaSuggestions:(id)arg2;
- (id)metadataController;
- (void)metadataController:(id)arg1 didChangeArtwork:(id)arg2;
- (void)metadataController:(id)arg1 didChangeBundleID:(id)arg2;
- (void)metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2;
- (void)metadataController:(id)arg1 didChangeTimeControls:(id)arg2;
- (void)metadataController:(id)arg1 didChangeTransportControls:(id)arg2;
- (id)metadataDataSource;
- (id)observers;
- (id)queueHandoffCoordinator;
- (void)queueHandoffCoordinator:(id)arg1 didChangeResponse:(id)arg2;
- (void)queueHandoffCoordinator:(id)arg1 didChangeState:(long long)arg2;
- (id)quickControlItem;
- (void)removeObserver:(id)arg1;
- (void)removeSwiftObserver:(id)arg1;
- (void)routingDeviceImage:(id /* block */)arg1;
- (void)setHandoffDataSource:(id)arg1;
- (void)setMetadataDataSource:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueueHandoffCoordinator:(id)arg1;
- (id)tvRemoteController;
- (void)tvRemoteController:(id)arg1 didChangeShowTVRemote:(bool)arg2;
- (void)updateAutomaticResponseLoading;
- (void)updateQuickTransportItem;

@end
