
@interface AMSFollowUpAction : NSObject {
    NSObject<OS_dispatch_queue> * _actionQueue;
    NSString * _backingIdentifier;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _label;
    AMSMetricsEvent * _metricsEvent;
    NSURL * _url;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (nonatomic, retain) NSString *backingIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, copy) AMSMetricsEvent *metricsEvent;
@property (nonatomic, retain) NSString *parentIdentifier;
@property (nonatomic, retain) NSString *preferredClient;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) bool requiresFollowUpUI;
@property (nonatomic) bool shouldClear;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2;
- (id)actionQueue;
- (id)backingIdentifier;
- (id)generateAction;
- (id)identifier;
- (id)initWithAction:(id)arg1;
- (id)initWithAction:(id)arg1 parentIdentifier:(id)arg2;
- (id)initWithItem:(id)arg1 action:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 parentIdentifier:(id)arg2;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 parentIdentifier:(id)arg2;
- (id)internalQueue;
- (id)label;
- (id)logKey;
- (id)metricsEvent;
- (id)parentIdentifier;
- (id)performActionsWithBag:(id)arg1 account:(id)arg2;
- (id)performActionsWithContract:(id)arg1 account:(id)arg2;
- (id)postMetricsWithBag:(id)arg1;
- (id)postMetricsWithBagContract:(id)arg1;
- (id)preferredClient;
- (id)request;
- (bool)requiresFollowUpUI;
- (void)setActionQueue:(id)arg1;
- (void)setBackingIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMetricsEvent:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setPreferredClient:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequiresFollowUpUI:(bool)arg1;
- (void)setShouldClear:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldClear;
- (id)url;
- (id)userInfo;

@end
