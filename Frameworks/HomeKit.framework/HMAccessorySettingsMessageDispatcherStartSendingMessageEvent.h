
@interface HMAccessorySettingsMessageDispatcherStartSendingMessageEvent : HMCoreAnalyticsMetricEvent {
    NSString * _messageName;
    NSString * _updateKeyPath;
}

@property (readonly, copy) NSString *messageName;
@property (readonly, copy) NSString *updateKeyPath;

- (void).cxx_destruct;
- (id)eventPayload;
- (id)initWithMessageName:(id)arg1 updateKeyPath:(id)arg2;
- (id)messageName;
- (id)updateKeyPath;

@end
