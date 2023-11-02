
@interface CKXPCActivity : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSObject<OS_xpc_object> * _criteria;
    NSString * _identifier;
    bool  _shouldBeDataBudgeted;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *criteria;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool shouldBeDataBudgeted;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)activity;
- (struct _xpc_activity_eligibility_changed_handler_s { }*)addEligibilityChangedHandler:(id /* block */)arg1;
- (id)criteria;
- (id)identifier;
- (id)initWithXPCActivity:(id)arg1;
- (void)removeEligibilityChangedHandler:(struct _xpc_activity_eligibility_changed_handler_s { }*)arg1;
- (bool)shouldBeDataBudgeted;
- (long long)state;

@end
