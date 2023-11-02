
@interface ARMeshGeometry : NSObject <NSSecureCoding> {
    ARGeometrySource * _classification;
    ARGeometryElement * _faces;
    ARGeometrySource * _normals;
    ARGeometrySource * _vertices;
}

@property (nonatomic, retain) ARGeometrySource *classification;
@property (nonatomic, retain) ARGeometryElement *faces;
@property (nonatomic, retain) ARGeometrySource *normals;
@property (nonatomic, retain) ARGeometrySource *vertices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classification;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faces;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(id)arg1 faces:(id)arg2;
- (id)initWithVertices:(id)arg1 normals:(id)arg2 faces:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)normals;
- (void)setClassification:(id)arg1;
- (void)setFaces:(id)arg1;
- (void)setNormals:(id)arg1;
- (void)setVertices:(id)arg1;
- (id)vertices;

@end
