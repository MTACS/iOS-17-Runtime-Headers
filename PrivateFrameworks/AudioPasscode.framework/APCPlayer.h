
@interface APCPlayer : NSObject {
    unsigned long long  _callbackTimingMSec;
    AUPasscodeCodecConfiguration * _codecConfig;
    NSData * _configurationData;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    APCEncoderProcessor * _encodeProcessor;
    bool  _isPlaying;
    NSData * _payload;
    AVPlayer * _player;
    APCPlayerEngine * _playerEngine;
}

@property (nonatomic) unsigned long long callbackTimingMSec;
@property (nonatomic, readonly, copy) NSData *configurationData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) APCPlayerEmbedInfo *embeddingInfo;
@property (readonly) bool isPlaying;
@property (nonatomic, readonly, copy) NSData *payload;

+ (unsigned long long)assetIDFromIdentifier:(id)arg1;
+ (id)carrierAssetIdentifiers;
+ (id)fileNameForCarrierAsset:(unsigned long long)arg1;
+ (id)urlForCarrierAsset:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)callbackTimingMSec;
- (id)configurationData;
- (id)createCompatibleConfigForCapabilites:(id)arg1;
- (id)dispatchQueue;
- (id)embeddingInfo;
- (void)endPasscodeEmbedding;
- (id)init;
- (id)initWithCodecConfiguration:(id)arg1;
- (id)initWithListenerCapabilityData:(id)arg1;
- (id)initWithListenerCapabilityData:(id)arg1 payloadLength:(unsigned long long)arg2;
- (bool)isPlaying;
- (id)payload;
- (float)preparePayload:(id)arg1 usingCarrierAsset:(unsigned long long)arg2 error:(id*)arg3;
- (float)preparePayload:(id)arg1 usingCarrierAtURL:(id)arg2 error:(id*)arg3;
- (void)setCallbackTimingMSec:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (bool)startSend;
- (bool)startSendAtTime:(unsigned long long)arg1 withBeginning:(id /* block */)arg2;
- (void)stopSend:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)stopSendAfterMinimumLoops:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)stopSendWithFadeOut:(float)arg1 completion:(id /* block */)arg2;

@end
