
@interface _CNFlatMapSubscriptionContext : NSObject {
    CNQueue * _decorators;
    <CNScheduler> * _downstream;
    bool  _observerReceiving;
    bool  _operatorReceiving;
    <CNScheduler> * _resourceLock;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) CNQueue *decorators;
@property (nonatomic, readonly) <CNScheduler> *downstream;
@property (getter=isObserverReceiving, nonatomic) bool observerReceiving;
@property (getter=isOperatorReceiving, nonatomic) bool operatorReceiving;
@property (nonatomic, readonly) <CNScheduler> *resourceLock;
@property (nonatomic, readonly) NSMutableArray *tokens;

- (void).cxx_destruct;
- (id)decorators;
- (id)downstream;
- (id)initWithSchedulerProvider:(id)arg1;
- (bool)isObserverReceiving;
- (bool)isOperatorReceiving;
- (id)resourceLock;
- (void)setObserverReceiving:(bool)arg1;
- (void)setOperatorReceiving:(bool)arg1;
- (id)tokens;

@end
