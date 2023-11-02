
@interface MRUMRMetadataDataSource : NSObject <MRUEndpointControllerObserver, MRUMetadataDataSource, _MCStateDumpPropertyListTransformable> {
    MRUArtwork * _artwork;
    NSString * _bundleID;
    <MRUMetadataDataSourceDelegate> * _delegate;
    MRUEndpointController * _endpointController;
    MRUNowPlayingInfo * _nowPlayingInfo;
    MRNowPlayingPlayerResponse * _response;
    unsigned long long  _stateHandle;
    MRUTimeControls * _timeControls;
    MRUTransportControls * _transportControls;
}

@property (nonatomic, readonly) MRUArtwork *artwork;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUMetadataDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MRUEndpointController *endpointController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUNowPlayingInfo *nowPlayingInfo;
@property (nonatomic, retain) MRNowPlayingPlayerResponse *response;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MRUTimeControls *timeControls;
@property (nonatomic, readonly) MRUTransportControls *transportControls;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)artwork;
- (id)bundleID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)endpointController;
- (void)endpointController:(id)arg1 didChangeRoute:(id)arg2;
- (void)endpointController:(id)arg1 didChangeState:(long long)arg2;
- (id)init;
- (id)initWithEndpointController:(id)arg1 response:(id)arg2;
- (id)nowPlayingInfo;
- (id)placeholder;
- (id)placeholderSymbolName;
- (id)response;
- (void)setDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (unsigned long long)stateHandle;
- (id)timeControls;
- (id)transportControls;
- (void)updateArtwork;
- (void)updateArtworkWithResponse:(id)arg1;
- (void)updateBundleIDWithResponse:(id)arg1;
- (void)updateData;
- (void)updateNowPlayingInfoWithResponse:(id)arg1;
- (void)updateTimeControlsWithResponse:(id)arg1;
- (void)updateTransportControlsWithResponse:(id)arg1;

@end
