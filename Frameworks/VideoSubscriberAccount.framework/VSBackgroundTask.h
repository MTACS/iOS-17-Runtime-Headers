
@interface VSBackgroundTask : NSObject {
    RBSAssertion * _assertion;
    <VSBackgroundTaskDelegate> * _delegate;
    NSString * _name;
}

@property (nonatomic, retain) RBSAssertion *assertion;
@property (nonatomic) <VSBackgroundTaskDelegate> *delegate;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)assertion;
- (bool)begin;
- (id)delegate;
- (void)end;
- (id)init;
- (id)name;
- (void)setAssertion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;

@end
