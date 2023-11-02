
@interface HMImmutableSettingValueEvent : HMEEvent {
    HMImmutableSettingValue * _settingValue;
}

@property (nonatomic, readonly) HMImmutableSettingValue *settingValue;

+ (id)decodeSettingValueFromEvent:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)encodedData;
- (id)initSettingValue:(id)arg1 eventSource:(id)arg2 eventTimestamp:(double)arg3;
- (id)settingValue;

@end
