
@interface WFIntentHandlerResource : WFResource <WFActionEventObserver> {
    WFHandleIntentAction * _action;
    bool  _requiresIntentSupport;
}

@property (nonatomic) WFHandleIntentAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresIntentSupport;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)refreshAvailability;
- (bool)requiresIntentSupport;
- (void)setAction:(id)arg1;
- (void)setupWithAction:(id)arg1;

@end
