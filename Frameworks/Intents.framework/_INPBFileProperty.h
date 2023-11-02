
@interface _INPBFileProperty : PBCodable <NSCopying, NSSecureCoding, _INPBFileProperty> {
    struct { 
        unsigned int name : 1; 
        unsigned int qualifier : 1; 
    }  _has;
    int  _name;
    int  _qualifier;
    _INPBFilePropertyValue * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasQualifier;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) int name;
@property (nonatomic) int qualifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBFilePropertyValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsName:(id)arg1;
- (int)StringAsQualifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasName;
- (bool)hasQualifier;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)name;
- (id)nameAsString:(int)arg1;
- (int)qualifier;
- (id)qualifierAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasQualifier:(bool)arg1;
- (void)setName:(int)arg1;
- (void)setQualifier:(int)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
