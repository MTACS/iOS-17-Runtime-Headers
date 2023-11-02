
@interface AssistantSiriAnalyticsMessageTailing : NSObject {
    NSObject<OS_dispatch_queue> * _messageTailingQueue;
    SiriAnalyticsPreferences * _preferences;
}

- (void).cxx_destruct;
- (void)_tailMessage:(id)arg1;
- (void)_tailMessage:(id)arg1 timestamp:(unsigned long long)arg2 messageUUID:(id)arg3 clockIdentifier:(id)arg4;
- (void)_tailMessages:(id)arg1;
- (id)init;
- (id)initWithPreferences:(id)arg1;
- (void)tailAnyEvents:(id)arg1;
- (void)tailMessage:(id)arg1;
- (void)tailMessage:(id)arg1 timestamp:(unsigned long long)arg2 messageUUID:(id)arg3 clockIdentifier:(id)arg4;
- (void)tailMessages:(id)arg1;

@end
