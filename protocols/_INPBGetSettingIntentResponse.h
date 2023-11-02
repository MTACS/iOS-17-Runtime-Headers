
@protocol _INPBGetSettingIntentResponse <NSObject>

@required

+ (Class)settingResponseDataType;

- (void)addSettingResponseData:(_INPBGetSettingResponseData *)arg1;
- (void)clearSettingResponseDatas;
- (NSString *)errorDetail;
- (bool)hasErrorDetail;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setSettingResponseDatas:(NSArray *)arg1;
- (_INPBGetSettingResponseData *)settingResponseDataAtIndex:(unsigned long long)arg1;
- (NSArray *)settingResponseDatas;
- (unsigned long long)settingResponseDatasCount;

@end
