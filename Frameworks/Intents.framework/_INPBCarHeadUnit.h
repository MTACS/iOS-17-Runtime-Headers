
@interface _INPBCarHeadUnit : PBCodable <NSCopying, NSSecureCoding, _INPBCarHeadUnit> {
    NSString * _bluetoothIdentifier;
    struct { }  _has;
    NSString * _iAP2Identifier;
}

@property (nonatomic, copy) NSString *bluetoothIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBluetoothIdentifier;
@property (nonatomic, readonly) bool hasIAP2Identifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iAP2Identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bluetoothIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBluetoothIdentifier;
- (bool)hasIAP2Identifier;
- (unsigned long long)hash;
- (id)iAP2Identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBluetoothIdentifier:(id)arg1;
- (void)setIAP2Identifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
