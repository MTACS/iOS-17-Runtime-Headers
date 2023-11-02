
@interface GEOResourceFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_scales : 1; 
        unsigned int read_scenarios : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scales;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scenarios;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*scales;
@property (nonatomic, readonly) unsigned long long scalesCount;
@property (nonatomic, readonly) int*scenarios;
@property (nonatomic, readonly) unsigned long long scenariosCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsScales:(id)arg1;
- (int)StringAsScenarios:(id)arg1;
- (void)addScale:(int)arg1;
- (void)addScenario:(int)arg1;
- (void)clearScales;
- (void)clearScenarios;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
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
- (int)scaleAtIndex:(unsigned long long)arg1;
- (int*)scales;
- (id)scalesAsString:(int)arg1;
- (unsigned long long)scalesCount;
- (int)scenarioAtIndex:(unsigned long long)arg1;
- (int*)scenarios;
- (id)scenariosAsString:(int)arg1;
- (unsigned long long)scenariosCount;
- (void)setScales:(int*)arg1 count:(unsigned long long)arg2;
- (void)setScenarios:(int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
