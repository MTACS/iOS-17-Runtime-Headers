
@interface _PBFPosterRoleProcessorTransaction : NSObject <BSCancellable, PBFPosterRoleProcessorTransaction> {
    NSCountedSet * _affectedRoles;
    BSAtomicFlag * _cancelFlag;
    <PBFPosterRoleCoordinatorTransitionContext> * _context;
    NSMutableArray * _emittedEvents;
    NSMutableArray * _executedChanges;
    BSAtomicFlag * _invalidationFlag;
    NSArray * _observers;
    PBFPosterRoleProcessor * _processor;
    NSString * _reason;
    <PBFPosterRoleProcessorResult> * _results;
    NSString * _shortIdentifier;
    NSDictionary * _userInfo;
}

@property (readonly) NSCountedSet *affectedRoles;
@property (nonatomic, readonly) <PBFPosterRoleCoordinatorTransitionContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *emittedEvents;
@property (readonly) NSArray *executedChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInvalidated;
@property (readonly) NSArray *observers;
@property (nonatomic, readonly) PBFPosterRoleProcessor *processor;
@property (nonatomic, readonly) NSString *reason;
@property (retain) <PBFPosterRoleProcessorResult> *results;
@property (nonatomic, readonly) NSString *shortIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)transactionWithReason:(id)arg1 context:(id)arg2 userInfo:(id)arg3 observers:(id)arg4 processor:(id)arg5;

- (void).cxx_destruct;
- (id)affectedRoles;
- (void)appendEmittedEvent:(id)arg1;
- (void)appendExecutedChange:(id)arg1;
- (void)cancel;
- (id)context;
- (id)description;
- (id)emittedEvents;
- (id)executedChanges;
- (id)init;
- (void)invalidate;
- (bool)isInvalidated;
- (id)observers;
- (id)processor;
- (id)reason;
- (id)results;
- (void)setResults:(id)arg1;
- (id)shortIdentifier;
- (id)userInfo;

@end
