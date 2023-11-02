
@interface GEOTransitRegionAlert : PBCodable <NSCopying> {
    GEOTransitBanner * _banner;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_banner : 1; 
        unsigned int read_triggerRegions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _triggerRegions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOTransitBanner *banner;
@property (nonatomic, readonly) bool hasBanner;
@property (nonatomic, retain) NSMutableArray *triggerRegions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)triggerRegionType;

- (void).cxx_destruct;
- (void)addTriggerRegion:(id)arg1;
- (id)banner;
- (void)clearTriggerRegions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBanner;
- (bool)hasGreenTeaWithValue:(bool)arg1;
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
- (void)setBanner:(id)arg1;
- (void)setTriggerRegions:(id)arg1;
- (id)triggerRegionAtIndex:(unsigned long long)arg1;
- (id)triggerRegions;
- (unsigned long long)triggerRegionsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
