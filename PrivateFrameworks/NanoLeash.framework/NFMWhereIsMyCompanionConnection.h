
@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol> {
    id /* block */  _playSoundAndLEDCompletion;
    id /* block */  _playSoundCompletion;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)_cleanUpServerConnection;
- (void)applicationIdentifierWithReply:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)playNearbySoundOnPhone;
- (void)playSoundAndLightsOnCompanionWithCompletion:(id /* block */)arg1;
- (void)playSoundOnCompanionWithCompletion:(id /* block */)arg1;
- (void)playedSound:(bool)arg1;
- (void)playedSoundAndLED:(bool)arg1;
- (void)startRangingOnPhone;
- (void)stopRangingOnPhone;

@end
