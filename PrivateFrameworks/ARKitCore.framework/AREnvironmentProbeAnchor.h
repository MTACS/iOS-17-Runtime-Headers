
@interface AREnvironmentProbeAnchor : ARAnchor {
    float  _clippingPointLux;
    NSData * _colorHistogram;
    <MTLTexture> * _environmentTexture;
    void _extent;
    float  _opaquePixelPercentage;
    ARParametricLights * _parametricLights;
    NSSet * _sourceKeyframeUUIDs;
    NSUUID * _trackedPlaneIdentifier;
}

@property (nonatomic) float clippingPointLux;
@property (nonatomic, retain) NSData *colorHistogram;
@property (nonatomic, retain) <MTLTexture> *environmentTexture;
@property (nonatomic, readonly) void extent;
@property (nonatomic) float opaquePixelPercentage;
@property (nonatomic, retain) ARParametricLights *parametricLights;
@property (nonatomic, retain) NSSet *sourceKeyframeUUIDs;
@property (nonatomic, retain) NSUUID *trackedPlaneIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)clippingPointLux;
- (id)colorHistogram;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)environmentTexture;
- (void)extent;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 onPlane:(struct ARTexturedPlane { struct array<unsigned char, 16UL> { unsigned char x_1_1_1[16]; } x1; unsigned long long x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[4]; } x3; struct set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> { struct __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> { void *x_1_2_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>> { unsigned long long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; id x5; })arg2;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithIdentifier:(void *)arg1 transform:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 2: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithName:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithName:(void *)arg1 transform:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 2: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)initWithTransform:(void *)arg1 extent:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (float)opaquePixelPercentage;
- (id)parametricLights;
- (void)setClippingPointLux:(float)arg1;
- (void)setColorHistogram:(id)arg1;
- (void)setEnvironmentTexture:(id)arg1;
- (void)setOpaquePixelPercentage:(float)arg1;
- (void)setParametricLights:(id)arg1;
- (void)setSourceKeyframeUUIDs:(id)arg1;
- (void)setTrackedPlaneIdentifier:(id)arg1;
- (id)sourceKeyframeUUIDs;
- (id)trackedPlaneIdentifier;

@end
