
@interface AMSUIWebAction : NSObject <AMSUIWebActionRunnable> {
    NSArray * _acceptedResponseVersions;
    AMSMetricsEvent * _actionEvent;
    AMSUIWebClientContext * _context;
}

@property (nonatomic, retain) NSArray *acceptedResponseVersions;
@property (nonatomic, readonly) AMSMetricsEvent *actionEvent;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1;
- (id)acceptedResponseVersions;
- (id)actionEvent;
- (id)context;
- (id)initWithContext:(id)arg1;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAcceptedResponseVersions:(id)arg1;
- (void)setContext:(id)arg1;

@end
