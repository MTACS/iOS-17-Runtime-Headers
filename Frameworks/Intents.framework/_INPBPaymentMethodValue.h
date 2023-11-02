
@interface _INPBPaymentMethodValue : PBCodable <NSCopying, NSSecureCoding, _INPBPaymentMethodValue> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    _INPBImageValue * _icon;
    NSString * _identificationHint;
    NSString * _name;
    int  _type;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, readonly) bool hasIdentificationHint;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *icon;
@property (nonatomic, copy) NSString *identificationHint;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIcon;
- (bool)hasIdentificationHint;
- (bool)hasName;
- (bool)hasType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)icon;
- (id)identificationHint;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentificationHint:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
