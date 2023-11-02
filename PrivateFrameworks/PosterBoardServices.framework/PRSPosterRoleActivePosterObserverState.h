
@interface PRSPosterRoleActivePosterObserverState : NSObject {
    PRSPosterConfiguration * _activePoster;
    NSString * _role;
}

@property (nonatomic, readonly) PRSPosterConfiguration *activePoster;
@property (nonatomic, readonly) NSString *role;

- (void).cxx_destruct;
- (id)activePoster;
- (id)initWithRole:(id)arg1 activePoster:(id)arg2;
- (id)role;

@end
