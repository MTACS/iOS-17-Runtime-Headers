
@interface PFVideoMetadataAudioTrackFormatInfo : NSObject {
    AVAssetTrack * _audioTrack;
    const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; } * _channelLayout;
    bool  _channelLayoutUsesHigherOrderAmbisonics;
    struct opaqueCMFormatDescription { } * _firstFormatDescription;
    const struct AudioFormatListItem { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; } * _formatListItem;
}

@property (readonly) long long channelCount;
@property (readonly) bool channelLayoutUsesChannelDescriptions;
@property (readonly) bool channelLayoutUsesHigherOrderAmbisonics;

+ (id)infoForFirstAudioTrackOfAsset:(id)arg1 matchingCodecPredicate:(id /* block */)arg2;

- (void).cxx_destruct;
- (long long)channelCount;
- (bool)channelLayoutUsesChannelDescriptions;
- (bool)channelLayoutUsesHOA;
- (bool)channelLayoutUsesHigherOrderAmbisonics;
- (bool)getHOAChannelCount:(long long*)arg1 BEDChannelCount:(long long*)arg2;

@end
