
@interface MRNowPlayingSessionServiceClient : NSObject {
    NSMutableDictionary * _playerPathsByOrigin;
}

- (void).cxx_destruct;
- (id)_existingPlayerPathForOrigin:(id)arg1;
- (id)_generatePlayerID;
- (id)_generatePlayerPathForOrigin:(id)arg1;
- (void)_handleCreatePlayerForOrigin:(id)arg1 deviceInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleDestroyPlayersForOrigin:(id)arg1;
- (id)initWithService:(id)arg1;
- (void)mediaServicesResetNotification:(id)arg1;

@end
