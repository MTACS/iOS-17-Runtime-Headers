
@interface ANTonePlayerServiceListener : NSObject <ANTonePlayerServiceInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    ANTonePlayer * _player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, retain) ANTonePlayer *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fileURLForTone:(unsigned long long)arg1;
- (void)cleanForExit;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)playTone:(unsigned long long)arg1 audioSessionID:(unsigned int)arg2 endpointUUID:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)player;
- (void)setPlayer:(id)arg1;

@end
