
@interface SFSSServerTTSTask : SFSpeechSynthesisTask {
    SFSSOspreyTTSClient * _ospreyTTSClient;
}

@property (nonatomic) SFSSOspreyTTSClient *ospreyTTSClient;

+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioStreamBasicDescription:(id)arg1;
+ (long long)convertPhoneSetTypeToServerPhoneSetType:(long long)arg1;
+ (long long)convertVoiceTypeToServerType:(long long)arg1;
+ (id)createGrpcHeadersFromRequest:(id)arg1;
+ (id)createOspreyRequestFromReqeust:(id)arg1;
+ (id)flatPhonemeSequence:(id)arg1;
+ (id)generateProsodyTransferConfig:(id)arg1;
+ (id)generateResourceAssetFromResourceMetaInfo:(id)arg1;
+ (id)generateVoiceAssetFromVoiceMetaInfo:(id)arg1;

- (void).cxx_destruct;
- (void)cancelTask;
- (id)initWithRequest:(id)arg1;
- (id)ospreyTTSClient;
- (void)setOspreyTTSClient:(id)arg1;
- (void)startTask:(id /* block */)arg1;

@end
