
@interface GEOLPRLPRConvertRule : PBCodable <NSCopying> {
    NSMutableArray * _fillRules;
    struct { 
        unsigned int has_validEndTime : 1; 
        unsigned int has_validStartTime : 1; 
        unsigned int read_fillRules : 1; 
        unsigned int read_mapRules : 1; 
        unsigned int read_pickupRules : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _mapRules;
    NSMutableArray * _pickupRules;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _validEndTime;
    unsigned int  _validStartTime;
}

@property (nonatomic, retain) NSMutableArray *fillRules;
@property (nonatomic) bool hasValidEndTime;
@property (nonatomic) bool hasValidStartTime;
@property (nonatomic, retain) NSMutableArray *mapRules;
@property (nonatomic, retain) NSMutableArray *pickupRules;
@property (nonatomic, readonly) NSDateInterval *validDateInterval;
@property (nonatomic) unsigned int validEndTime;
@property (nonatomic) unsigned int validStartTime;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)fillRuleType;
+ (bool)isValid:(id)arg1;
+ (Class)mapRuleType;
+ (Class)pickupRuleType;

- (void).cxx_destruct;
- (void)addFillRule:(id)arg1;
- (void)addMapRule:(id)arg1;
- (void)addPickupRule:(id)arg1;
- (void)clearFillRules;
- (void)clearMapRules;
- (void)clearPickupRules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fillRuleAtIndex:(unsigned long long)arg1;
- (id)fillRules;
- (unsigned long long)fillRulesCount;
- (bool)hasValidEndTime;
- (bool)hasValidStartTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapRuleAtIndex:(unsigned long long)arg1;
- (id)mapRules;
- (unsigned long long)mapRulesCount;
- (void)mergeFrom:(id)arg1;
- (id)pickupRuleAtIndex:(unsigned long long)arg1;
- (id)pickupRules;
- (unsigned long long)pickupRulesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFillRules:(id)arg1;
- (void)setHasValidEndTime:(bool)arg1;
- (void)setHasValidStartTime:(bool)arg1;
- (void)setMapRules:(id)arg1;
- (void)setPickupRules:(id)arg1;
- (void)setValidEndTime:(unsigned int)arg1;
- (void)setValidStartTime:(unsigned int)arg1;
- (unsigned int)validEndTime;
- (unsigned int)validStartTime;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)fillRulesForPlateTypes:(id)arg1 atIndexes:(id)arg2;
- (bool)hasValidDateInterval;
- (id)mapRulesForPlateTypes:(id)arg1 atIndexes:(id)arg2;
- (id)pickupRulesForPlateTypes:(id)arg1 atIndexes:(id)arg2;
- (id)rules:(id)arg1 forPlateTypes:(id)arg2 atIndexes:(id)arg3;
- (id)validDateInterval;

@end
