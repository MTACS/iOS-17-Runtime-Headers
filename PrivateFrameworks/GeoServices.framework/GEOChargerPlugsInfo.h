
@interface GEOChargerPlugsInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_suggestedChargerPlugs : 1; 
        unsigned int read_supportedChargerPlugs : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _suggestedChargerPlugs;
    NSMutableArray * _supportedChargerPlugs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *suggestedChargerPlugs;
@property (nonatomic, retain) NSMutableArray *supportedChargerPlugs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)suggestedChargerPlugType;
+ (Class)supportedChargerPlugType;

- (void).cxx_destruct;
- (void)addSuggestedChargerPlug:(id)arg1;
- (void)addSupportedChargerPlug:(id)arg1;
- (void)clearSuggestedChargerPlugs;
- (void)clearSupportedChargerPlugs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
- (void)setSuggestedChargerPlugs:(id)arg1;
- (void)setSupportedChargerPlugs:(id)arg1;
- (id)suggestedChargerPlugAtIndex:(unsigned long long)arg1;
- (id)suggestedChargerPlugs;
- (unsigned long long)suggestedChargerPlugsCount;
- (id)supportedChargerPlugAtIndex:(unsigned long long)arg1;
- (id)supportedChargerPlugs;
- (unsigned long long)supportedChargerPlugsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
