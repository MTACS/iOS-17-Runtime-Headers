
@interface MRClientUpdatesConfigMessage : MRProtocolMessage {
    NSArray * _subscribedPlayerPaths;
}

@property (nonatomic, readonly) bool artworkUpdates;
@property (nonatomic, readonly) bool keyboardUpdates;
@property (nonatomic, readonly) bool nowPlayingUpdates;
@property (nonatomic, readonly) bool outputDeviceUpdates;
@property (nonatomic, copy) NSArray *subscribedPlayerPaths;
@property (nonatomic, readonly) bool systemEndpointUpdates;
@property (nonatomic, readonly) bool volumeUpdates;

- (void).cxx_destruct;
- (bool)artworkUpdates;
- (id)initWithNowPlayingUpdates:(bool)arg1 artworkUpdates:(bool)arg2 volumeUpdates:(bool)arg3 keyboardUpdates:(bool)arg4 outputDeviceUpdates:(bool)arg5 systemEndpointUpdates:(bool)arg6 subscribedPlayerPaths:(id)arg7;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (bool)keyboardUpdates;
- (bool)nowPlayingUpdates;
- (bool)outputDeviceUpdates;
- (void)setSubscribedPlayerPaths:(id)arg1;
- (id)subscribedPlayerPaths;
- (bool)systemEndpointUpdates;
- (unsigned long long)type;
- (bool)volumeUpdates;

@end
