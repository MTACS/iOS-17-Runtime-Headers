
@interface VSVoiceAssetSelection : NSObject {
    MAAsset * _asset;
    NSString * _builtInVoicePath;
    VSTrialVoice * _trialVoice;
    VSVoiceAsset * _voiceData;
    NSString * _voicePath;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _voicePathLock;
}

@property (retain) MAAsset *asset;
@property (retain) NSString *builtInVoicePath;
@property (retain) VSTrialVoice *trialVoice;
@property (retain) VSVoiceAsset *voiceData;
@property (nonatomic, retain) NSString *voicePath;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } voicePathLock;

- (void).cxx_destruct;
- (id)asset;
- (id)builtInVoicePath;
- (void)dealloc;
- (id)descriptiveKey;
- (id)init;
- (id)initWithTrialVoice:(id)arg1;
- (bool)isDownloading;
- (bool)isInstalled;
- (id)key;
- (double)preferenceScore;
- (void)setAsset:(id)arg1;
- (void)setBuiltInVoicePath:(id)arg1;
- (void)setTrialVoice:(id)arg1;
- (void)setVoiceData:(id)arg1;
- (void)setVoicePath:(id)arg1;
- (void)setVoicePathLock:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;
- (unsigned long long)size;
- (id)trialVoice;
- (id)voiceData;
- (id)voicePath;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })voicePathLock;

@end
