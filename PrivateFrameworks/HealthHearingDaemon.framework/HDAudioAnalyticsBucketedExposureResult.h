
@interface HDAudioAnalyticsBucketedExposureResult : NSObject {
    NSNumber * _audioExposureDose;
    NSNumber * _audioExposureDuration;
    NSNumber * _audioExposureLEQ;
}

@property (nonatomic, retain) NSNumber *audioExposureDose;
@property (nonatomic, retain) NSNumber *audioExposureDuration;
@property (nonatomic, retain) NSNumber *audioExposureLEQ;

- (void).cxx_destruct;
- (id)audioExposureDose;
- (id)audioExposureDuration;
- (id)audioExposureLEQ;
- (id)initWithLEQ:(id)arg1 duration:(id)arg2 dose:(id)arg3;
- (void)setAudioExposureDose:(id)arg1;
- (void)setAudioExposureDuration:(id)arg1;
- (void)setAudioExposureLEQ:(id)arg1;

@end
