
@interface SFSpeechSynthesizer : NSObject {
    NSObject<OS_dispatch_queue> * _cacheTaskQueue;
    NSObject<OS_dispatch_queue> * _deviceTaskQueue;
    bool  _isVoiceAssetDownloaded;
    NSLocale * _locale;
    NSObject<OS_dispatch_queue> * _serverTaskQueue;
    SFSpeechSynthesisVoice * _voice;
}

@property (nonatomic, readonly) bool isVoiceAssetDownloaded;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) SFSpeechSynthesisVoice *voice;

+ (id)getVoiceByName:(id)arg1;
+ (void)initialize;
+ (id)supportedLocales;
+ (id)supportedVoicesByLocale:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithVoice:(id)arg1;
- (bool)isVoiceAssetDownloaded;
- (id)locale;
- (void)prewarm:(long long)arg1;
- (id)startTaskWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)startTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)startTaskWithRequest:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (id)voice;

@end
