
@interface ACHCodableEarnedInstance : PBCodable <NSCopying> {
    double  _createdDate;
    long long  _creatorDevice;
    NSString * _earnedDateComponents;
    NSString * _externalIdentifier;
    struct { 
        unsigned int createdDate : 1; 
        unsigned int creatorDevice : 1; 
        unsigned int key : 1; 
        unsigned int value : 1; 
    }  _has;
    long long  _key;
    ACHCodableSyncIdentity * _syncIdentity;
    NSString * _templateUniqueName;
    double  _value;
    NSString * _valueUnitString;
}

@property (nonatomic) double createdDate;
@property (nonatomic) long long creatorDevice;
@property (nonatomic, retain) NSString *earnedDateComponents;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic) bool hasCreatedDate;
@property (nonatomic) bool hasCreatorDevice;
@property (nonatomic, readonly) bool hasEarnedDateComponents;
@property (nonatomic, readonly) bool hasExternalIdentifier;
@property (nonatomic) bool hasKey;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasTemplateUniqueName;
@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) bool hasValueUnitString;
@property (nonatomic) long long key;
@property (nonatomic, retain) ACHCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSString *templateUniqueName;
@property (nonatomic) double value;
@property (nonatomic, retain) NSString *valueUnitString;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)createdDate;
- (long long)creatorDevice;
- (id)description;
- (id)dictionaryRepresentation;
- (id)earnedDateComponents;
- (id)externalIdentifier;
- (bool)hasCreatedDate;
- (bool)hasCreatorDevice;
- (bool)hasEarnedDateComponents;
- (bool)hasExternalIdentifier;
- (bool)hasKey;
- (bool)hasSyncIdentity;
- (bool)hasTemplateUniqueName;
- (bool)hasValue;
- (bool)hasValueUnitString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedDate:(double)arg1;
- (void)setCreatorDevice:(long long)arg1;
- (void)setEarnedDateComponents:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setHasCreatedDate:(bool)arg1;
- (void)setHasCreatorDevice:(bool)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setKey:(long long)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setTemplateUniqueName:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setValueUnitString:(id)arg1;
- (id)syncIdentity;
- (id)templateUniqueName;
- (double)value;
- (id)valueUnitString;
- (void)writeTo:(id)arg1;

@end
