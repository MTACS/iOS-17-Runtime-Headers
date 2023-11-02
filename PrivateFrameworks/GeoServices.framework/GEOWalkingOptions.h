
@interface GEOWalkingOptions : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _avoidedModes;
    struct { 
        unsigned int has_preferredSpeed : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_avoidedModes : 1; 
        unsigned int read_walkingUserPreferences : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _preferredSpeed;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOWalkingUserPreferences * _walkingUserPreferences;
}

@property (nonatomic, readonly) int*avoidedModes;
@property (nonatomic, readonly) unsigned long long avoidedModesCount;
@property (nonatomic) bool hasPreferredSpeed;
@property (nonatomic, readonly) bool hasWalkingUserPreferences;
@property (nonatomic) double preferredSpeed;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOWalkingUserPreferences *walkingUserPreferences;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAvoidedModes:(id)arg1;
- (void)addAvoidedMode:(int)arg1;
- (int)avoidedModeAtIndex:(unsigned long long)arg1;
- (int*)avoidedModes;
- (id)avoidedModesAsString:(int)arg1;
- (unsigned long long)avoidedModesCount;
- (void)clearAvoidedModes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreferredSpeed;
- (bool)hasWalkingUserPreferences;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double)preferredSpeed;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasPreferredSpeed:(bool)arg1;
- (void)setPreferredSpeed:(double)arg1;
- (void)setWalkingUserPreferences:(id)arg1;
- (id)unknownFields;
- (id)walkingUserPreferences;
- (void)writeTo:(id)arg1;

@end
