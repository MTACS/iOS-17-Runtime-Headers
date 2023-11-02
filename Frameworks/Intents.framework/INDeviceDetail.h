
@interface INDeviceDetail : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    INSpeakableString * _category;
    long long  _deviceClass;
    INSpeakableString * _deviceName;
    INPerson * _deviceOwner;
    NSString * _identifier;
    INSpeakableString * _productName;
}

@property (nonatomic, readonly, copy) INSpeakableString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceClass;
@property (nonatomic, readonly, copy) INSpeakableString *deviceName;
@property (nonatomic, readonly, copy) INPerson *deviceOwner;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) INSpeakableString *productName;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceClass;
- (id)deviceName;
- (id)deviceOwner;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(long long)arg3 productName:(id)arg4 category:(id)arg5 deviceOwner:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)productName;

@end
