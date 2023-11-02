
@interface _INPBSetMessageAttributeIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetMessageAttributeIntent> {
    int  _attribute;
    struct { 
        unsigned int attribute : 1; 
    }  _has;
    NSArray * _identifiers;
    _INPBIntentMetadata * _intentMetadata;
}

@property (nonatomic) int attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAttribute;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *identifiers;
@property (nonatomic, readonly) unsigned long long identifiersCount;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAttribute:(id)arg1;
- (void)addIdentifier:(id)arg1;
- (int)attribute;
- (id)attributeAsString:(int)arg1;
- (void)clearIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAttribute;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)identifiers;
- (unsigned long long)identifiersCount;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttribute:(int)arg1;
- (void)setHasAttribute:(bool)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
