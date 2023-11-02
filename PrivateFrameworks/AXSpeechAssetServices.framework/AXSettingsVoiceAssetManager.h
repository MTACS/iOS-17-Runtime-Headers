
@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {
    NSPointerArray * _delegates;
    struct __SCNetworkReachability { } * _reachability;
    AVSpeechSynthesizer * _samplePlayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_currentDelegates;
- (void)_updateAllowedToDownload;
- (void)addDelegate:(id)arg1;
- (bool)allowedToDownloadVoiceAssets;
- (void)dealloc;
- (id)init;
- (bool)isAssetManagedBySiriForVoiceId:(id)arg1;
- (id)mobileAssetDownloadQueue;
- (id)mobileAssetWorkQueue;
- (void)playSample:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDelegate:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;

@end
