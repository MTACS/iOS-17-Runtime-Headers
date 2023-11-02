
@interface BNPenderQueue : NSObject <BNPresentableQueueDelegate, BNRequesterPending> {
    NSString * _penderIdentifier;
    NSMutableArray * _penderQueue;
    NSMutableSet * _suspendedPenders;
    BNSuspensionController * _suspensionController;
}

@property (nonatomic, readonly, copy) NSSet *activeSuspensionReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *penderIdentifier;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (void).cxx_destruct;
- (id)_penderForRequesterWithIdentifier:(id)arg1 creatingIfNecessary:(bool)arg2;
- (id)activeSuspensionReasons;
- (void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;
- (bool)isSuspended;
- (id)peekPresentable;
- (id)penderIdentifier;
- (void)presentableQueue:(id)arg1 didDequeuePresentableWithPendingIdentifier:(id)arg2;
- (id)pullPresentablesWithIdentification:(id)arg1;
- (void)setPenderIdentifier:(id)arg1;
- (bool)setSuspended:(bool)arg1 forReason:(id)arg2;
- (bool)setSuspended:(bool)arg1 forRequesterWithIdentifier:(id)arg2 reason:(id)arg3;

@end
