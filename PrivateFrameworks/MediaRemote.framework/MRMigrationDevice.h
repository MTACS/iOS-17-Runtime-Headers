
@interface MRMigrationDevice : NSObject <MRQHONowPlayingControllerDelegate> {
    MRQHONowPlayingController * _controller;
    <MRMigrationDeviceDelegate> * _delegate;
    unsigned long long  _deviceState;
    NSError * _prepareError;
    bool  _preparedForAirPlay;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) MRQHONowPlayingController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRMigrationDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long deviceState;
@property (nonatomic, readonly) MRAVEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPrepared;
@property (nonatomic, readonly) MRNowPlayingPlayerResponse *playerState;
@property (nonatomic, retain) NSError *prepareError;
@property (nonatomic) bool preparedForAirPlay;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uid;

+ (id)proactiveDevice;

- (void).cxx_destruct;
- (void)_checkIfAirPlayPossible;
- (void)_notifyDelegateOfPlayerStateChange;
- (void)_notifyDelegateOfStateChange;
- (id)controller;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;
- (void)controller:(id)arg1 didUpdateResponse:(id)arg2;
- (void)controllerWillReloadForInvalidation:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned long long)deviceState;
- (id)dictionaryRepresentation;
- (id)endpoint;
- (id)initWithUID:(id)arg1;
- (bool)isPrepared;
- (id)playerState;
- (void)prepare;
- (id)prepareError;
- (bool)preparedForAirPlay;
- (id)queue;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(unsigned long long)arg1;
- (void)setPrepareError:(id)arg1;
- (void)setPreparedForAirPlay:(bool)arg1;
- (void)setQueue:(id)arg1;
- (id)uid;

@end
