
@interface AMSUIWebActionRunnerAction : AMSUIWebAction {
    NSDictionary * _actionPayload;
}

@property (nonatomic, copy) NSDictionary *actionPayload;

- (void).cxx_destruct;
- (id)actionPayload;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setActionPayload:(id)arg1;

@end
