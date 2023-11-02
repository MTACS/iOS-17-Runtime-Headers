
@interface HDMCDeviceInfo : NSObject <NSCopying> {
    long long  _dayStreamProcessorAlgorithmVersion;
    bool  _fertileWindowNotificationsEnabled;
    bool  _menstruationNotificationsEnabled;
}

@property (nonatomic, readonly) long long dayStreamProcessorAlgorithmVersion;
@property (nonatomic, readonly) bool fertileWindowNotificationsEnabled;
@property (nonatomic, readonly) bool menstruationNotificationsEnabled;
@property (nonatomic, readonly) bool someNotificationsEnabled;

+ (id)deviceInfoFromStorageGroup:(id)arg1;
+ (id)localDeviceInfoWithSettingsManager:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayStreamProcessorAlgorithmVersion;
- (id)description;
- (bool)fertileWindowNotificationsEnabled;
- (unsigned long long)hash;
- (id)initWithDayStreamProcessorAlgorithmVersion:(long long)arg1 menstruationNotificationsEnabled:(bool)arg2 fertileWindowNotificationsEnabled:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)menstruationNotificationsEnabled;
- (bool)someNotificationsEnabled;

@end
