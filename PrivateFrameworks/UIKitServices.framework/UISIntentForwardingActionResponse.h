
@interface UISIntentForwardingActionResponse : BSActionResponse {
    INIntentForwardingActionResponse * _cachedIntentForwardingActionResponse;
    INIntentResponse * _cachedIntentResponse;
}

@property (nonatomic, readonly) INIntentForwardingActionResponse *intentForwardingActionResponse;
@property (nonatomic, readonly) INIntentResponse *intentResponse;

+ (id)responseWithIntentForwardingActionResponse:(id)arg1;
+ (id)responseWithIntentResponse:(id)arg1;

- (void).cxx_destruct;
- (id)initWithIntentForwardingActionResponse:(id)arg1;
- (id)initWithIntentResponse:(id)arg1;
- (id)intentForwardingActionResponse;
- (id)intentResponse;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
