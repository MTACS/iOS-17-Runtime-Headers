
@interface GEOPDResultRefinementMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int has_metadataType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_metadataDefault : 1; 
        unsigned int read_metadataSort : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDResultRefinementMetadataDefault * _metadataDefault;
    GEOPDResultRefinementMetadataSort * _metadataSort;
    int  _metadataType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMetadataDefault;
@property (nonatomic, readonly) bool hasMetadataSort;
@property (nonatomic) bool hasMetadataType;
@property (nonatomic, retain) GEOPDResultRefinementMetadataDefault *metadataDefault;
@property (nonatomic, retain) GEOPDResultRefinementMetadataSort *metadataSort;
@property (nonatomic) int metadataType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMetadataType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetadataDefault;
- (bool)hasMetadataSort;
- (bool)hasMetadataType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)metadataDefault;
- (id)metadataSort;
- (int)metadataType;
- (id)metadataTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMetadataType:(bool)arg1;
- (void)setMetadataDefault:(id)arg1;
- (void)setMetadataSort:(id)arg1;
- (void)setMetadataType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
