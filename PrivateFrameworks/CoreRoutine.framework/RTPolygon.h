
@interface RTPolygon : NSObject <NSCopying, NSSecureCoding> {
    RTCoordinate * _centroid;
    NSArray * _vertices;
}

@property (nonatomic, readonly) RTCoordinate *centroid;
@property (nonatomic, readonly) NSArray *vertices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)centroid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCentroid:(id)arg1 vertices:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPolygon:(id)arg1;
- (id)vertices;

@end
