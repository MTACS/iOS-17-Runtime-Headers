
@interface APCEncoderProcessor : NSObject {
    AUPasscodeEncoder * _encoderAU;
    APCPlayerEmbedInfo * _passcodeEmbedInfo;
    AUAudioUnitOfflineProcessor * _processor;
}

- (void).cxx_destruct;
- (float)evaluateAsset:(id)arg1;
- (bool)getEmbeddingInfo:(id*)arg1;
- (id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 outputURL:(id)arg4 error:(id*)arg5;
- (void)run;

@end
