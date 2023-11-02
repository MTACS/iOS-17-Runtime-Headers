
@interface _INPBHomeAutomationFromEntity : PBCodable <NSCopying, NSSecureCoding, _INPBHomeAutomationFromEntity> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    _INPBString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
