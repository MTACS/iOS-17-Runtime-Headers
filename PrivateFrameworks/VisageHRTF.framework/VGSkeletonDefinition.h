
@interface VGSkeletonDefinition : NSObject <NSSecureCoding> {
    unsigned long long  _jointCount;
    NSArray * _parentChildOrder;
    long long  _rootJointIndex;
    int  _skeletonType;
}

@property (nonatomic) unsigned long long jointCount;
@property (nonatomic, retain) NSArray *parentChildOrder;
@property (nonatomic) long long rootJointIndex;
@property (nonatomic) int skeletonType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)jointCount;
- (id)parentChildOrder;
- (long long)rootJointIndex;
- (void)setJointCount:(unsigned long long)arg1;
- (void)setParentChildOrder:(id)arg1;
- (void)setRootJointIndex:(long long)arg1;
- (void)setSkeletonType:(int)arg1;
- (int)skeletonType;

@end
