
@interface _INPBGetSettingIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBGetSettingIntentResponse> {
    NSString * _errorDetail;
    struct { }  _has;
    NSArray * _settingResponseDatas;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (nonatomic, readonly) bool hasErrorDetail;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *settingResponseDatas;
@property (nonatomic, readonly) unsigned long long settingResponseDatasCount;
@property (readonly) Class superclass;

+ (Class)settingResponseDataType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSettingResponseData:(id)arg1;
- (void)clearSettingResponseDatas;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDetail;
- (bool)hasErrorDetail;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setSettingResponseDatas:(id)arg1;
- (id)settingResponseDataAtIndex:(unsigned long long)arg1;
- (id)settingResponseDatas;
- (unsigned long long)settingResponseDatasCount;
- (void)writeTo:(id)arg1;

@end
