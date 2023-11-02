
@interface AVAudioMixInputParametersInternal : NSObject {
    NSString * audioTimePitchAlgorithm;
    AVAudioMixEffectParameters * effectParameters;
    AVMutableScheduledAudioParameters * scheduledAudioParameters;
    struct opaqueMTAudioProcessingTap { } * tap;
    int  trackID;
}

@end
