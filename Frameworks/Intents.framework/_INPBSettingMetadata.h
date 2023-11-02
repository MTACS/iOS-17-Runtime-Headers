
@interface _INPBSettingMetadata : PBCodable <NSCopying, NSSecureCoding, _INPBSettingMetadata> {
    struct { }  _has;
    NSString * _settingId;
    _INPBAppIdentifier * _targetApp;
    _INPBDevice * _targetDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSettingId;
@property (nonatomic, readonly) bool hasTargetApp;
@property (nonatomic, readonly) bool hasTargetDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *settingId;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBAppIdentifier *targetApp;
@property (nonatomic, retain) _INPBDevice *targetDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSettingId;
- (bool)hasTargetApp;
- (bool)hasTargetDevice;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSettingId:(id)arg1;
- (void)setTargetApp:(id)arg1;
- (void)setTargetDevice:(id)arg1;
- (id)settingId;
- (id)targetApp;
- (id)targetDevice;
- (void)writeTo:(id)arg1;

@end
