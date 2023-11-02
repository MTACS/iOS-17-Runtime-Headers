
@interface HMIUpdateTorsoModelTask : HMIHomeTask {
    NSSet * _torsoAnnotations;
}

@property (readonly) NSSet *torsoAnnotations;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 torsoAnnotations:(id)arg3;
- (void)mainInsideAutoreleasePool;
- (id)torsoAnnotations;

@end
