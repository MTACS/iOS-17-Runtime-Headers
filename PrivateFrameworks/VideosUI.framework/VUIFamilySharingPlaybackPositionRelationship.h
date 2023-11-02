
@interface VUIFamilySharingPlaybackPositionRelationship : VUIFamilySharingRelationship {
    NSNumber * _positionInMilliseconds;
    NSDate * _recordedAtTimestamp;
}

@property (nonatomic, retain) NSNumber *positionInMilliseconds;
@property (nonatomic, retain) NSDate *recordedAtTimestamp;

- (void).cxx_destruct;
- (id)positionInMilliseconds;
- (id)recordedAtTimestamp;
- (void)setPositionInMilliseconds:(id)arg1;
- (void)setRecordedAtTimestamp:(id)arg1;

@end
