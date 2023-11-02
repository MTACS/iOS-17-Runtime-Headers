
@interface GEOCondition : PBCodable <GEOServerCondition, NSCopying> {
    NSMutableArray * _conditions;
    unsigned int  _expirationTime;
    struct { 
        unsigned int has_expirationTime : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) long long conditionType;
@property (nonatomic, retain) NSMutableArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic) unsigned int expirationTime;
@property (nonatomic) bool hasExpirationTime;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *subconditions;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)conditionType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addCondition:(id)arg1;
- (void)clearConditions;
- (void)clearUnknownFields:(bool)arg1;
- (id)conditionAtIndex:(unsigned long long)arg1;
- (long long)conditionType;
- (id)conditions;
- (unsigned long long)conditionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (unsigned int)expirationTime;
- (bool)hasExpirationTime;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditions:(id)arg1;
- (void)setExpirationTime:(unsigned int)arg1;
- (void)setHasExpirationTime:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (id)subconditions;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
