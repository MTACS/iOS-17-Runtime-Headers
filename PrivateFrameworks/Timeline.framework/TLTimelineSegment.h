
@interface TLTimelineSegment : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _count;
    TLTimelineEntryNode * _leftmostNode;
    TLTimelineEntryNode * _rightmostNode;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) TLTimelineEntryNode *leftmostNode;
@property (nonatomic, readonly) TLTimelineEntryNode *rightmostNode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsNode:(id)arg1;
- (bool)contractFromLeft;
- (bool)contractFromRight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)expandToLeft;
- (bool)expandToRight;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftmostNode:(id)arg1 rightmostNode:(id)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)leftmostNode;
- (id)rightmostNode;
- (bool)shiftLeft;
- (bool)shiftRight;

@end
