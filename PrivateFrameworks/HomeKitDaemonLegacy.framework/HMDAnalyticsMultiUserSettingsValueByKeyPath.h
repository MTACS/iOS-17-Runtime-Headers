
@interface HMDAnalyticsMultiUserSettingsValueByKeyPath : HMFObject {
    NSData * _multiUserSettingsValueData;
    long long  _multiUserSettingsValueInteger;
    NSString * _multiUserSettingsValueString;
    int  _type;
}

@property (nonatomic, copy) NSData *multiUserSettingsValueData;
@property long long multiUserSettingsValueInteger;
@property (nonatomic, copy) NSString *multiUserSettingsValueString;
@property int type;

- (void).cxx_destruct;
- (id)multiUserSettingsValueData;
- (long long)multiUserSettingsValueInteger;
- (id)multiUserSettingsValueString;
- (void)setMultiUserSettingsValueData:(id)arg1;
- (void)setMultiUserSettingsValueInteger:(long long)arg1;
- (void)setMultiUserSettingsValueString:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
