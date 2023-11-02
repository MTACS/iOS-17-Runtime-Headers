
@interface HMAccessorySettingsMessageDispatcherFinishSendingMessageEvent : HMCoreAnalyticsTimedMetricEvent {
    NSString * _messageName;
}

@property (readonly) NSString *messageName;

- (void).cxx_destruct;
- (id)eventPayload;
- (id)initWithMessageName:(id)arg1;
- (id)messageName;

@end
