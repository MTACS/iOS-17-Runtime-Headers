
@interface GEOLPRDefinedPlateType : PBCodable <NSCopying> {
    NSMutableArray * _conditions;
    NSString * _desc;
    struct { 
        unsigned int read_conditions : 1; 
        unsigned int read_desc : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *conditions;
@property (nonatomic, retain) NSString *desc;
@property (nonatomic, readonly) bool hasDesc;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)conditionsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addConditions:(id)arg1;
- (void)clearConditions;
- (id)conditions;
- (id)conditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conditionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)desc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDesc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditions:(id)arg1;
- (void)setDesc:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)hasDefinedPlateConditionsForVehicle:(id)arg1 error:(id*)arg2;

@end
