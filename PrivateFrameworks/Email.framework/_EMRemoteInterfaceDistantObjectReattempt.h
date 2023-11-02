
@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject {
    NSError * _error;
    NSInvocation * _invocation;
}

@property (readonly) NSError *error;
@property (readonly) NSInvocation *invocation;

+ (id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)error;
- (id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;
- (id)invocation;
- (void)perform;

@end
