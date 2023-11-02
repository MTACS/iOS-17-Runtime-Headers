
@interface PRSPosterRoleActivePosterObserver : NSObject {
    id /* block */  _handler;
    bool  _needsSandboxExtensions;
    NSMutableDictionary * _roleToState;
    NSSet * _roles;
}

@property (copy) id /* block */ handler;
@property (nonatomic, readonly) bool needsSandboxExtensions;
@property (nonatomic, readonly) NSSet *roles;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)init;
- (id)initWithRoles:(id)arg1;
- (id)initWithRoles:(id)arg1 needsSandboxExtensions:(bool)arg2;
- (void)issueUpdatedState:(id)arg1;
- (bool)needsSandboxExtensions;
- (id)roles;
- (void)setHandler:(id /* block */)arg1;
- (id)stateForRole:(id)arg1;

@end
