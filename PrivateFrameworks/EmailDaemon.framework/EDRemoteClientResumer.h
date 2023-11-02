
@interface EDRemoteClientResumer : NSObject <EDResumable> {
    EDRemoteClient * _remoteClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property EDRemoteClient *remoteClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRemoteClient:(id)arg1;
- (id)remoteClient;
- (void)resumeForUpdates;
- (void)setRemoteClient:(id)arg1;

@end
