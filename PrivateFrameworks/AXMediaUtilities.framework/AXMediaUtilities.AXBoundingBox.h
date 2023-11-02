
@interface AXMediaUtilities.AXBoundingBox : NSObject {
    void angle;
    void centroid3d;
    void classIndex;
    void depth;
    void firstSeen;
    void heat;
    void heatByClass;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void knownFeaturePoints;
    void lastSeen;
    void physicalSize;
    void rect;
}

@property (nonatomic, readonly) NSString *description;

+ (id)postComputeClickabilityWithDecoded:(id)arg1 nmsThreshold:(float)arg2 filterThresholds:(id)arg3;
+ (id)postComputeWithDecoded:(id)arg1 nmsThreshold:(float)arg2 filterThresholds:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
