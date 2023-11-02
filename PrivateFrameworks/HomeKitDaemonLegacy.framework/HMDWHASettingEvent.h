
@interface HMDWHASettingEvent : HMMLogEvent {
    NSString * _keyPath;
    AWDHomeKitValue * _value;
}

@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic, copy) AWDHomeKitValue *value;

+ (id)eventWithKeyPath:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
