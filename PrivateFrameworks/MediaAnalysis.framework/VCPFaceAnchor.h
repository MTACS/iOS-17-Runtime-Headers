
@interface VCPFaceAnchor : NSObject <NSSecureCoding> {
    NSDictionary * _blendShapes;
    VCPFaceGeometry * _geometry;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (nonatomic, readonly) VCPFaceGeometry *geometry;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendShapes;
- (void)encodeWithCoder:(id)arg1;
- (id)geometry;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 blendShapes:(id)arg2 geometry:(id)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end
