
@interface UISIntentForwardingAction : BSAction {
    INIntent * _cachedIntent;
    INIntentForwardingAction * _cachedIntentForwardingAction;
}

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentForwardingAction *intentForwardingAction;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)initWithIntent:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithIntentForwardingAction:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)intent;
- (id)intentForwardingAction;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
