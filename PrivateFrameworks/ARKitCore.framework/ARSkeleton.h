
@interface ARSkeleton : NSObject {
    ARSkeletonDefinition * _definition;
    unsigned long long  _jointCount;
}

@property (nonatomic, readonly) ARSkeletonDefinition *definition;
@property (nonatomic, readonly) unsigned long long jointCount;

- (void).cxx_destruct;
- (id)definition;
- (id)initPrivate;
- (bool)isJointTracked:(long long)arg1;
- (unsigned long long)jointCount;

@end
