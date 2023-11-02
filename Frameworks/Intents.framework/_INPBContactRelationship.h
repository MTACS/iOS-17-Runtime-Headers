
@interface _INPBContactRelationship : PBCodable <NSCopying, NSSecureCoding, _INPBContactRelationship> {
    struct { }  _has;
    NSString * _name;
    NSString * _relation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasRelation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *relation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasName;
- (bool)hasRelation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)relation;
- (void)setName:(id)arg1;
- (void)setRelation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
