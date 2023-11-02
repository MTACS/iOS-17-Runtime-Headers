
@interface INSettingMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _settingId;
    INAppIdentifier * _targetApp;
    INSettingDevice * _targetDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *settingId;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INAppIdentifier *targetApp;
@property (nonatomic, readonly, copy) INSettingDevice *targetDevice;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingId:(id)arg1 targetDevice:(id)arg2 targetApp:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)settingId;
- (id)targetApp;
- (id)targetDevice;

@end
