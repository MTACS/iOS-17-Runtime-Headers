
@interface GEOLPRRestrictionRegion : PBCodable <NSCopying> {
    NSMutableArray * _convertRules;
    NSMutableArray * _definedPlateTypes;
    struct { 
        unsigned int read_convertRules : 1; 
        unsigned int read_definedPlateTypes : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    GEOMapRegionE7 * _mapRegion;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *convertRules;
@property (nonatomic, retain) NSMutableArray *definedPlateTypes;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOMapRegionE7 *mapRegion;
@property (nonatomic, retain) NSString *name;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)convertRuleType;
+ (Class)definedPlateTypesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addConvertRule:(id)arg1;
- (void)addDefinedPlateTypes:(id)arg1;
- (void)clearConvertRules;
- (void)clearDefinedPlateTypes;
- (id)convertRuleAtIndex:(unsigned long long)arg1;
- (id)convertRules;
- (unsigned long long)convertRulesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definedPlateTypes;
- (id)definedPlateTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)definedPlateTypesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapRegion;
- (bool)hasName;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConvertRules:(id)arg1;
- (void)setDefinedPlateTypes:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)plateTypeIndexesMatchingVehicle:(id)arg1 error:(id*)arg2;

@end
