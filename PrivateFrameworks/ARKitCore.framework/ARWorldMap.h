
@interface ARWorldMap : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _anchors;
    void _center;
    void _extent;
    ARPointCloud * _rawFeaturePoints;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceOriginTransform;
    NSData * _surfaceData;
    NSData * _trackingData;
    long long  _version;
}

@property (nonatomic, copy) NSArray *anchors;
@property (nonatomic, readonly) void center;
@property (nonatomic, readonly) void extent;
@property (nonatomic, readonly) ARPointCloud *rawFeaturePoints;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic, copy) NSData *surfaceData;
@property (nonatomic, readonly, copy) NSData *trackingData;
@property (nonatomic, readonly) long long version;

+ (struct { })boundsForTrackingData:(id)arg1;
+ (id)featurePointsForTrackingData:(id)arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
+ (id)keyframesForTrackingData:(id)arg1 withFeaturePoints:(id)arg2 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchors;
- (void)center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extent;
- (id)extractReferenceObjectWithTransform:(void *)arg1 center:(void *)arg2 extent:(void *)arg3 error:(void *)arg4; // needs 4 arg types, found 2: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, id*
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingData:(id)arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (bool)isEqual:(id)arg1;
- (id)rawFeaturePoints;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (void)setAnchors:(id)arg1;
- (void)setSurfaceData:(id)arg1;
- (id)surfaceData;
- (id)trackingData;
- (long long)version;

@end
