
@interface VGSkeleton : NSObject <NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _floorAlignedRootTransform;
    NSArray * _jointConfidence;
    NSArray * _localPoses;
    NSArray * _modelPoses;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _rootTransform;
    VGSkeletonDefinition * _skeletonDefinition;
    int  _skeletonType;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } floorAlignedRootTransform;
@property (nonatomic, retain) NSArray *jointConfidence;
@property (nonatomic, retain) NSArray *localPoses;
@property (nonatomic, retain) NSArray *modelPoses;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rootTransform;
@property (nonatomic, retain) VGSkeletonDefinition *skeletonDefinition;
@property (nonatomic) int skeletonType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })floorAlignedRootTransform;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jointConfidence;
- (id)localPoses;
- (id)modelPoses;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rootTransform;
- (void)setFloorAlignedRootTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setJointConfidence:(id)arg1;
- (void)setLocalPoses:(id)arg1;
- (void)setModelPoses:(id)arg1;
- (void)setRootTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSkeletonDefinition:(id)arg1;
- (void)setSkeletonType:(int)arg1;
- (id)skeletonDefinition;
- (int)skeletonType;

@end
