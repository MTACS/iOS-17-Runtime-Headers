
@interface HMDAppleMediaProfile : HMDMediaProfile <MPRequestResponseControllerDelegate> {
    MPRequestResponseController * _controller;
    HMDMediaSystem * _mediaSystem;
}

@property (readonly) MPRequestResponseController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDAppleMediaAccessory *mediaAccessory;
@property (nonatomic) HMDMediaSystem *mediaSystem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleSetPower:(id)arg1;
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)_updatePlayback:(id)arg1;
- (bool)_updateRefreshPlayback:(id)arg1;
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;
- (id)controller;
- (void)didFinishLoadingRequestForController:(id)arg1;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;
- (id)mediaAccessory;
- (id)mediaSystem;
- (void)registerForMessages;
- (void)sessionAudioControlUpdated:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setMediaSystem:(id)arg1;

@end
