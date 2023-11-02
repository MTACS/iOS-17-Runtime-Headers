
@interface MRUMediaSuggestionsController : NSObject <MRUEndpointControllerObserver, MRULockScreenMonitorObserver, MRUMediaSuggestionsDataSourceDelegate, MRUMetadataControllerObserver> {
    NSString * _context;
    <MRUMediaSuggestionsDataSource> * _dataSource;
    <MRUMediaSuggestionsControllerDelegate> * _delegate;
    MRUEndpointController * _endpointController;
    bool  _isPlaying;
    bool  _isQueueHandoffActive;
    NSDate * _lastPlayingDate;
    MRULockScreenMonitor * _lockscreenMonitor;
    NSArray * _mediaSuggestions;
    MRUMetadataController * _metadataController;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) <MRUMediaSuggestionsDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUMediaSuggestionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MRUEndpointController *endpointController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPlaying;
@property (nonatomic) bool isQueueHandoffActive;
@property (nonatomic, retain) NSDate *lastPlayingDate;
@property (nonatomic, retain) MRULockScreenMonitor *lockscreenMonitor;
@property (nonatomic, readonly) NSArray *mediaSuggestions;
@property (nonatomic, readonly) MRUMetadataController *metadataController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)dataSource;
- (id)delegate;
- (id)endpointController;
- (void)endpointController:(id)arg1 didChangeRoute:(id)arg2;
- (id)initWithEndpointController:(id)arg1 metadataController:(id)arg2 dataSource:(id)arg3;
- (bool)isPlaying;
- (bool)isQueueHandoffActive;
- (id)lastPlayingDate;
- (id)lockscreenMonitor;
- (void)lockscreenMonitor:(id)arg1 didUpdateDeviceLocked:(bool)arg2;
- (id)mediaSuggestions;
- (void)mediaSuggestionsDataSource:(id)arg1 didChangeMediaSuggestions:(id)arg2;
- (id)metadataController;
- (void)metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2;
- (void)playSuggestion:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshMediaSuggestions;
- (id)requestQueue;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPlaying:(bool)arg1;
- (void)setIsQueueHandoffActive:(bool)arg1;
- (void)setLastPlayingDate:(id)arg1;
- (void)setLockscreenMonitor:(id)arg1;
- (void)setMediaSuggestions:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)updateLastPlayedDate;
- (void)updateMediaSuggestions;
- (void)updatePlayingState;

@end
