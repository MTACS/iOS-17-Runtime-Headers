
@interface RoomPlan.RoomScanKeyframe : NSObject <RSKeyframe> {
    void cameraPose;
    void colors;
    void coreKeyframe;
    void count;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void points;
    void pointsToWorld;
    void semanticLabels;
    void semanticVotes;
    void timestamp;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraPose;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**colors;
@property (nonatomic) long long count;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**pointsToWorld;
@property (nonatomic) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticLabels;
@property (nonatomic) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticVotes;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraPose;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)colors;
- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (id)identifier;
- (id)init;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)pointsToWorld;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticLabels;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticVotes;
- (void)setCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setColors:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setCount:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setPointsToWorld:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setSemanticLabels:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setSemanticVotes:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
