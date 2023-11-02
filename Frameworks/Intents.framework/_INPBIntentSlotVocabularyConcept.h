
@interface _INPBIntentSlotVocabularyConcept : PBCodable <NSCopying, NSSecureCoding, _INPBIntentSlotVocabularyConcept> {
    struct { 
        unsigned int requiresUserIdentification : 1; 
    }  _has;
    NSString * _identifier;
    bool  _requiresUserIdentification;
    NSArray * _synonyms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasRequiresUserIdentification;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool requiresUserIdentification;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *synonyms;
@property (nonatomic, readonly) unsigned long long synonymsCount;

+ (bool)supportsSecureCoding;
+ (Class)synonymsType;

- (void).cxx_destruct;
- (void)addSynonyms:(id)arg1;
- (void)clearSynonyms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIdentifier;
- (bool)hasRequiresUserIdentification;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requiresUserIdentification;
- (void)setHasRequiresUserIdentification:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiresUserIdentification:(bool)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (id)synonymsAtIndex:(unsigned long long)arg1;
- (unsigned long long)synonymsCount;
- (void)writeTo:(id)arg1;

@end
