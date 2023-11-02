
@interface TLTimelineWindow : NSObject <NSCopying, NSSecureCoding, TLTimelineWindow> {
    TLTimelineEntryNode * _focalNode;
    TLTimelineSegment * _leftSegment;
    unsigned long long  _maxNodes;
    TLTimelineSegment * _rightSegment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TLTimelineEntryNode *focalNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long leftEntryCount;
@property (nonatomic, readonly) TLTimelineSegment *leftSegment;
@property (nonatomic, readonly) NSDate *leftmostContiguousEntryDate;
@property (nonatomic, readonly) unsigned long long maxNodes;
@property (nonatomic, readonly) unsigned long long rightEntryCount;
@property (nonatomic, readonly) TLTimelineSegment *rightSegment;
@property (nonatomic, readonly) NSDate *rightmostContiguousEntryDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)focalNode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocalNode:(id)arg1 leftSegment:(id)arg2 rightSegment:(id)arg3 maxNodes:(unsigned long long)arg4;
- (id)initWithFocalNode:(id)arg1 maxNodes:(unsigned long long)arg2;
- (id)initWithFocalNode:(id)arg1 maxNodes:(unsigned long long)arg2 leftSegmentCount:(unsigned long long)arg3 rightSegmentCount:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)leftEntryCount;
- (id)leftSegment;
- (id)leftmostContiguousEntryDate;
- (id)leftmostNode;
- (unsigned long long)maxNodes;
- (void)rebalance;
- (unsigned long long)rightEntryCount;
- (id)rightSegment;
- (id)rightmostContiguousEntryDate;
- (id)rightmostNode;
- (void)updateFocalNodeWithDate:(id)arg1;

@end
