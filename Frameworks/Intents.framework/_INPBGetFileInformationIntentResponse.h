
@interface _INPBGetFileInformationIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBGetFileInformationIntentResponse> {
    _INPBString * _entityName;
    struct { 
        unsigned int success : 1; 
    }  _has;
    _INPBFileProperty * _property;
    bool  _success;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic, readonly) bool hasProperty;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBFileProperty *property;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (bool)hasEntityName;
- (bool)hasProperty;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)property;
- (bool)readFrom:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setProperty:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
