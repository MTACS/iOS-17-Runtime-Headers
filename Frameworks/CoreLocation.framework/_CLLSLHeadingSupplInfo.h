
@interface _CLLSLHeadingSupplInfo : NSObject <NSCopying, NSSecureCoding> {
    _CLLSLMapRoadSegment * _roadSegment;
}

@property (nonatomic, copy) _CLLSLMapRoadSegment *roadSegment;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)roadSegment;
- (void)setRoadSegment:(id)arg1;

@end
