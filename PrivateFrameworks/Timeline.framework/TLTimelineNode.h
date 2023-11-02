
@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding> {
    TLTimelineNode * _leftNode;
    TLTimelineNode * _rightNode;
}

@property (nonatomic, retain) TLTimelineNode *leftNode;
@property (nonatomic, retain) TLTimelineNode *rightNode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyLeftNodes:(bool)arg2 copyRightNodes:(bool)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToObject:(id)arg1 includingLeftNodes:(bool)arg2 includingRightNodes:(bool)arg3;
- (id)leftNode;
- (id)rightNode;
- (void)setLeftNode:(id)arg1;
- (void)setRightNode:(id)arg1;

@end
