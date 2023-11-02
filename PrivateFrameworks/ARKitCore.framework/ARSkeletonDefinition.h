
@interface ARSkeletonDefinition : NSObject {
    NSArray * _jointNames;
    ARSkeleton3D * _neutralBodySkeleton3D;
    NSArray * _parentIndices;
}

@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) NSArray *jointNames;
@property (nonatomic, readonly) ARSkeleton3D *neutralBodySkeleton3D;
@property (nonatomic, readonly) NSArray *parentIndices;

+ (id)defaultBody2DSkeletonDefinition;
+ (id)defaultBody3DSkeletonDefinition;

- (void).cxx_destruct;
- (unsigned long long)indexForJointName:(id)arg1;
- (id)initDefault2DSkeletonDefinition;
- (id)initDefault3DSkeletonDefinition;
- (unsigned long long)jointCount;
- (id)jointNames;
- (id)neutralBodySkeleton3D;
- (id)parentIndices;

@end
