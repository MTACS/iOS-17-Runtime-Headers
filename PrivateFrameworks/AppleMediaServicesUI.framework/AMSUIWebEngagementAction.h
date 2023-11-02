
@interface AMSUIWebEngagementAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSDictionary * _event;
    NSArray * _messagePlacements;
    NSString * _messageServiceType;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *messagePlacements;
@property (nonatomic, readonly) NSString *messageServiceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_resultFromMessageResponse:(id)arg1;
- (id)event;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)messagePlacements;
- (id)messageServiceType;
- (id)runAction;

@end
