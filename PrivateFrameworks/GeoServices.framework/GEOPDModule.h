
@interface GEOPDModule : PBCodable <NSCopying> {
    struct { 
        unsigned int has_moduleConfigurationIndex : 1; 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_moduleDebugDescription : 1; 
        unsigned int read_options : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _moduleConfigurationIndex;
    NSString * _moduleDebugDescription;
    GEOPDModuleOptions * _options;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasModuleConfigurationIndex;
@property (nonatomic, readonly) bool hasModuleDebugDescription;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic) bool hasType;
@property (nonatomic) int moduleConfigurationIndex;
@property (nonatomic, retain) NSString *moduleDebugDescription;
@property (nonatomic, retain) GEOPDModuleOptions *options;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModuleConfigurationIndex;
- (bool)hasModuleDebugDescription;
- (bool)hasOptions;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)moduleConfigurationIndex;
- (id)moduleDebugDescription;
- (id)options;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasModuleConfigurationIndex:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setModuleConfigurationIndex:(int)arg1;
- (void)setModuleDebugDescription:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
