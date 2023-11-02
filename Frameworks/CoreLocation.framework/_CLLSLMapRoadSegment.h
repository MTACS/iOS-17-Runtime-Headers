
@interface _CLLSLMapRoadSegment : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _polylines;
    unsigned long long  _roadID;
}

@property (nonatomic, copy) NSArray *polylines;
@property (nonatomic) unsigned long long roadID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)polylines;
- (unsigned long long)roadID;
- (void)setPolylines:(id)arg1;
- (void)setRoadID:(unsigned long long)arg1;

@end
