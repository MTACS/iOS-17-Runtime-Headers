
@interface IMDPLogsCollector : NSObject {
    _DPBitValueRecorder * _privatizedImageReceivedRecorder;
    _DPBitValueRecorder * _privatizedImageSentRecorder;
    _DPBitValueRecorder * _privatizedUIInteractionRecorder;
}

@property (nonatomic, retain) _DPBitValueRecorder *privatizedImageReceivedRecorder;
@property (nonatomic, retain) _DPBitValueRecorder *privatizedImageSentRecorder;
@property (nonatomic, retain) _DPBitValueRecorder *privatizedUIInteractionRecorder;

+ (id)_primaryAccountCountryCode;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)logPrivatizedImageReceivedEvent:(bool)arg1;
- (bool)logPrivatizedImageSentEvent:(bool)arg1;
- (bool)logPrivatizedUIInteractionEvent:(unsigned long long)arg1;
- (id)privatizedImageReceivedRecorder;
- (id)privatizedImageSentRecorder;
- (id)privatizedUIInteractionRecorder;
- (void)setPrivatizedImageReceivedRecorder:(id)arg1;
- (void)setPrivatizedImageSentRecorder:(id)arg1;
- (void)setPrivatizedUIInteractionRecorder:(id)arg1;

@end
