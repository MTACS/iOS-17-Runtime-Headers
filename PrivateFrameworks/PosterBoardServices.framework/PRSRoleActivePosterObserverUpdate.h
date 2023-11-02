
@interface PRSRoleActivePosterObserverUpdate : NSObject <BSXPCSecureCoding> {
    PRSServerPosterPath * _activePath;
    NSString * _role;
}

@property (nonatomic, readonly) PRSServerPosterPath *activePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *role;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)activePath;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithRole:(id)arg1 activePath:(id)arg2;
- (id)role;

@end
