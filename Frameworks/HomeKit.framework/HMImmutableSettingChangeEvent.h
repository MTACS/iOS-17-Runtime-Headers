
@interface HMImmutableSettingChangeEvent : HMEEvent {
    HMImmutableSetting * _setting;
}

@property (nonatomic, readonly) HMImmutableSetting *setting;

+ (id)decodeSettingFromEvent:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)encodedData;
- (id)initWithSetting:(id)arg1 eventSource:(id)arg2 eventTimestamp:(double)arg3;
- (id)setting;

@end
