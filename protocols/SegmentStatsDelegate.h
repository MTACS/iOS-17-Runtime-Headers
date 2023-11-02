
@protocol SegmentStatsDelegate <NSObject>

@required

- (unsigned int)audioErasureCount:(NSNumber *)arg1;
- (double)audioErasureTotalTime:(NSNumber *)arg1;
- (double)averageJitterBufferDelay:(NSNumber *)arg1;
- (double)avgJBTargetSizeChanges:(NSNumber *)arg1;
- (unsigned short)maxAudioErasureCount:(NSNumber *)arg1;
- (unsigned short)maxJBTargetSizeChanges:(NSNumber *)arg1;
- (unsigned short)maxVideoStallCount:(NSNumber *)arg1;
- (unsigned short)minVideoFrameRate:(NSNumber *)arg1;
- (unsigned int)numberOfWebParticipants;
- (unsigned int)significantVideoStallCount:(NSNumber *)arg1;
- (double)significantVideoStallTotalTime:(NSNumber *)arg1;
- (double)timeWeightedNumberOfParticipantsWebOnly:(bool)arg1;

@end
