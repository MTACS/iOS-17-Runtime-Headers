
@interface AMSUIWebODIAssessmentFeedbackAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSString * _cacheIdentifier;
    unsigned long long  _outcome;
}

@property (nonatomic, retain) NSString *cacheIdentifier;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long outcome;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (unsigned long long)outcome;
- (id)runAction;
- (void)setCacheIdentifier:(id)arg1;
- (void)setOutcome:(unsigned long long)arg1;

@end
