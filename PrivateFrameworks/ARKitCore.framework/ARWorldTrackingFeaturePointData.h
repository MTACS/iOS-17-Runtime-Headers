
@interface ARWorldTrackingFeaturePointData : NSObject <ARResultData, NSSecureCoding> {
    ARPointCloud * _featurePoints;
    double  _timestamp;
    ARPointCloud * _visionFeaturePoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ARPointCloud *featurePoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, retain) ARPointCloud *visionFeaturePoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)featurePoints;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFeaturePoints:(id)arg1;
- (void)setVisionFeaturePoints:(id)arg1;
- (double)timestamp;
- (id)visionFeaturePoints;

@end
