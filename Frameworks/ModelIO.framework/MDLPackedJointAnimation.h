
@interface MDLPackedJointAnimation : MDLObject <MDLJointAnimation, NSCopying> {
    NSArray * _jointPaths;
    MDLAnimatedQuaternionArray * _rotations;
    MDLAnimatedVector3Array * _scales;
    MDLAnimatedVector3Array * _translations;
}

@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) MDLAnimatedQuaternionArray *rotations;
@property (nonatomic, readonly) MDLAnimatedVector3Array *scales;
@property (nonatomic, readonly) MDLAnimatedVector3Array *translations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)jointPaths;
- (id)rotations;
- (id)scales;
- (id)translations;

@end
