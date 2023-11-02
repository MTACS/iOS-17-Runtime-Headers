
@interface _INPBSetRelationshipIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetRelationshipIntent> {
    NSArray * _contactIdentifiers;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBModifyRelationship * _targetRelationship;
}

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, readonly) unsigned long long contactIdentifiersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetRelationship;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBModifyRelationship *targetRelationship;

+ (Class)contactIdentifiersType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addContactIdentifiers:(id)arg1;
- (void)clearContactIdentifiers;
- (id)contactIdentifiers;
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactIdentifiersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasTargetRelationship;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifiers:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetRelationship:(id)arg1;
- (id)targetRelationship;
- (void)writeTo:(id)arg1;

@end
