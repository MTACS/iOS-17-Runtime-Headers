
@interface AVAssetReaderAudioMixOutputInternal : NSObject {
    NSMutableDictionary * audioCurvesForTracks;
    AVAudioMix * audioMix;
    AVAudioOutputSettings * audioOutputSettings;
    NSMutableDictionary * audioTapProcessorsForTracks;
    NSString * audioTimePitchAlgorithm;
    NSMutableDictionary * audioTimePitchAlgorithmsForTracks;
    NSArray * audioTracks;
}

@end
