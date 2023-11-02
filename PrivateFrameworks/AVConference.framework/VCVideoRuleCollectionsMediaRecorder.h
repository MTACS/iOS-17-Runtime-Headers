
@interface VCVideoRuleCollectionsMediaRecorder : NSObject {
    bool  _isHEIFAndHEVCFormatEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
