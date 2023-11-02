
@interface MRNowPlayingAudioFormatContentInfo : NSObject {
    NSNumber * _audioFormat;
    NSNumber * _audioSessionID;
    NSString * _bestAvailableContent;
    NSString * _bundleID;
    NSNumber * _channelCount;
    bool  _eligibleForSpatialization;
    long long  _intendedSpatialExperience;
    int  _pid;
    long long  _resolvedSpatialExperience;
    bool  _spatialized;
}

@property (nonatomic, readonly) NSNumber *audioFormat;
@property (nonatomic, readonly, copy) NSString *audioFormatDescription;
@property (nonatomic, readonly) NSNumber *audioSessionID;
@property (nonatomic, readonly) long long bestAvailableAudioFormat;
@property (nonatomic, readonly, copy) NSString *bestAvailableAudioFormatDescription;
@property (nonatomic, readonly) NSString *bestAvailableContent;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) NSNumber *channelCount;
@property (nonatomic, readonly) NSData *data;
@property (getter=isEligibleForSpatialization, nonatomic, readonly) bool eligibleForSpatialization;
@property (nonatomic) long long intendedSpatialExperience;
@property (getter=isMultichannel, nonatomic, readonly) bool multichannel;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) _MRMRNowPlayingAudioFormatContentInfoProtobuf *protobuf;
@property (nonatomic) long long resolvedSpatialExperience;
@property (getter=isSpatialized, nonatomic, readonly) bool spatialized;

- (void).cxx_destruct;
- (id)audioFormat;
- (id)audioFormatDescription;
- (id)audioSessionID;
- (long long)bestAvailableAudioFormat;
- (id)bestAvailableAudioFormatDescription;
- (id)bestAvailableContent;
- (id)bundleID;
- (id)channelCount;
- (id)data;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithPid:(int)arg1 bundleID:(id)arg2 audioSessionID:(id)arg3 audioFormat:(id)arg4 channelCount:(id)arg5 bestAvailableContent:(id)arg6 isEligibleForSpatialization:(id)arg7 isSpatialized:(id)arg8;
- (id)initWithProtobuf:(id)arg1;
- (long long)intendedSpatialExperience;
- (bool)isEligibleForSpatialization;
- (bool)isEqual:(id)arg1;
- (bool)isMultichannel;
- (bool)isSpatialized;
- (int)pid;
- (id)protobuf;
- (long long)resolvedSpatialExperience;
- (void)setBundleID:(id)arg1;
- (void)setIntendedSpatialExperience:(long long)arg1;
- (void)setResolvedSpatialExperience:(long long)arg1;

@end
