
@interface _HFHomeKitSettingsVendorSettingsWriteValueTransaction : NSObject {
    unsigned long long  _changeType;
    NSError * _error;
    id  _previousValue;
    HMSetting * _setting;
    NAFuture * _settingWriteFuture;
    bool  _started;
    NSNumber * _transactionNumber;
    NSDate * _transactionStartDate;
    id  _value;
}

@property (nonatomic, readonly) unsigned long long changeType;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly, copy) id previousValue;
@property (nonatomic, readonly) HMSetting *setting;
@property (nonatomic, retain) NAFuture *settingWriteFuture;
@property (getter=hasStarted, nonatomic) bool started;
@property (nonatomic, readonly) NSNumber *transactionNumber;
@property (nonatomic, readonly) NSDate *transactionStartDate;
@property (nonatomic, readonly, copy) id value;

- (void).cxx_destruct;
- (unsigned long long)changeType;
- (id)description;
- (id)descriptionBuilder;
- (id)error;
- (bool)hasStarted;
- (id)init;
- (id)initWithSetting:(id)arg1 previousValue:(id)arg2 value:(id)arg3 changeType:(unsigned long long)arg4;
- (id)previousValue;
- (void)setError:(id)arg1;
- (void)setSettingWriteFuture:(id)arg1;
- (void)setStarted:(bool)arg1;
- (id)setting;
- (id)settingWriteFuture;
- (id)transactionNumber;
- (id)transactionStartDate;
- (id)value;

@end
