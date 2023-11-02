
@protocol PFMetadataMovie

@required

- (NSNumber *)apacAudioTrackBedChannelCount;
- (NSNumber *)apacAudioTrackChannelCount;
- (NSString *)apacAudioTrackCodecProfileLevelDescription;
- (NSNumber *)apacAudioTrackHoaChannelCount;
- (NSNumber *)audioDataRate;
- (NSNumber *)audioSampleRate;
- (NSNumber *)audioTrackFormat;
- (NSNumber *)audioTrackFormatFlags;
- (NSString *)author;
- (NSString *)captureMode;
- (NSString *)colorPrimaries;
- (UTType *)contentTypeFromFastModernizeVideoMedia;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (NSNumber *)durationTimeInterval;
- (unsigned int)firstVideoTrackCodec;
- (NSString *)firstVideoTrackCodecString;
- (NSString *)firstVideoTrackFormatDebugDescription;
- (bool)hasVitality;
- (PFHEVCProfileInformation *)hevcProfileInfo;
- (bool)isActionCam;
- (bool)isAutoLivePhoto;
- (bool)isAutoloop;
- (bool)isCinematicVideo;
- (bool)isDecodable;
- (bool)isLongExposure;
- (bool)isLoopingVideo;
- (bool)isMirror;
- (bool)isPlayable;
- (bool)isProRes;
- (bool)isSloMo;
- (bool)isSpatialVideoRecommendedForImmersiveMode;
- (bool)isTimelapse;
- (NSNumber *)livePhotoMinimumClientVersion;
- (bool)livePhotoVitalityLimitingAllowed;
- (NSNumber *)livePhotoVitalityScore;
- (NSNumber *)livePhotoVitalityTransitionScore;
- (NSString *)montageString;
- (NSNumber *)nominalFrameRate;
- (NSString *)outOfBandHintsBase64String;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageDisplayTime;
- (NSString *)transferFunction;
- (NSString *)videoCodecName;
- (NSNumber *)videoDataRate;
- (NSNumber *)videoDynamicRange;
- (struct opaqueCMFormatDescription { }*)videoTrackFormatDescription;

@end
