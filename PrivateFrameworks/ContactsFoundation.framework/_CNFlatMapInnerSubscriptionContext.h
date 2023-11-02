
@interface _CNFlatMapInnerSubscriptionContext : NSObject {
    CNSuspendableSchedulerDecorator * _decorator;
    <CNCancelable> * _token;
}

@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *decorator;
@property (nonatomic, readonly) <CNCancelable> *token;

- (void).cxx_destruct;
- (id)decorator;
- (id)initWithDecorator:(id)arg1 token:(id)arg2;
- (id)token;

@end
