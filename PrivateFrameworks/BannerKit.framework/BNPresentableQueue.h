
@interface BNPresentableQueue : NSObject <BNPending> {
    <BNPresentableQueueDelegate> * _delegate;
    NSString * _penderIdentifier;
    NSMutableArray * _postingContextQueue;
    NSMapTable * _postingContextsToDequeuePromises;
    BNSuspensionController * _suspensionController;
}

@property (nonatomic, readonly, copy) NSSet *activeSuspensionReasons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNPresentableQueueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *penderIdentifier;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_pullPresentablesPassingTest:(id /* block */)arg1;
- (id)activeSuspensionReasons;
- (id)delegate;
- (void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;
- (bool)isSuspended;
- (id)peekPresentable;
- (id)penderIdentifier;
- (id)pullPresentablesWithIdentification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPenderIdentifier:(id)arg1;
- (bool)setSuspended:(bool)arg1 forReason:(id)arg2;

@end
