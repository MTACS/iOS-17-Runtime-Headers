
@interface INSettingDevice : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _deviceCategory;
    NSString * _deviceModel;
    NSString * _deviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceCategory;
@property (nonatomic, readonly, copy) NSString *deviceModel;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceCategory;
- (id)deviceModel;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 deviceModel:(id)arg2 deviceCategory:(long long)arg3;
- (bool)isEqual:(id)arg1;

@end
