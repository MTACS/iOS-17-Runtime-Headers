
@interface INCar : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _carIdentifier;
    struct CGColor { } * _color;
    NSString * _displayName;
    INCarHeadUnit * _headUnit;
    NSString * _make;
    NSString * _model;
    NSArray * _powerPerConnectors;
    NSArray * _supportedChargingConnectors;
    NSString * _year;
}

@property (nonatomic, readonly, copy) NSString *carIdentifier;
@property (nonatomic, readonly) struct CGColor { }*color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INCarHeadUnit *headUnit;
@property (nonatomic, readonly, copy) NSString *make;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSArray *powerPerConnectors;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supportedChargingConnectors;
@property (nonatomic, readonly, copy) NSString *year;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_colorDictionaryRepresentation;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)carIdentifier;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)headUnit;
- (id)initWithCarIdentifier:(id)arg1 displayName:(id)arg2 year:(id)arg3 make:(id)arg4 model:(id)arg5 color:(struct CGColor { }*)arg6 headUnit:(id)arg7 supportedChargingConnectors:(id)arg8;
- (id)initWithCarIdentifier:(id)arg1 displayName:(id)arg2 year:(id)arg3 make:(id)arg4 model:(id)arg5 color:(struct CGColor { }*)arg6 headUnit:(id)arg7 supportedChargingConnectors:(id)arg8 powerPerConnectors:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)make;
- (id)maximumPowerForChargingConnectorType:(id)arg1;
- (id)model;
- (id)powerPerConnectors;
- (void)setMaximumPower:(id)arg1 forChargingConnectorType:(id)arg2;
- (id)supportedChargingConnectors;
- (id)year;

@end
