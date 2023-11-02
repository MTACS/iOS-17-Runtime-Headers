
@interface UIOpenItemProvidersAction : BSAction

- (long long)UIActionType;
- (id)continuationEndpoint;
- (id)initWithDragContinuationEndpoint:(id)arg1;
- (id)initWithInfo:(id)arg1 responder:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned long long)providerSource;

@end
