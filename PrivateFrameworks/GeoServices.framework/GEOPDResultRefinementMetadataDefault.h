
@interface GEOPDResultRefinementMetadataDefault : PBCodable <NSCopying> {
    struct { 
        unsigned int has_refinementMetadataDefaultType : 1; 
        unsigned int has_selectionFromQuerySequenceNumber : 1; 
        unsigned int has_selectionFromQuery : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_refinementKey : 1; 
        unsigned int read_refinementValueMetadata : 1; 
        unsigned int read_refinementValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _refinementKey;
    int  _refinementMetadataDefaultType;
    NSString * _refinementValue;
    NSData * _refinementValueMetadata;
    bool  _selectionFromQuery;
    unsigned int  _selectionFromQuerySequenceNumber;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasRefinementKey;
@property (nonatomic) bool hasRefinementMetadataDefaultType;
@property (nonatomic, readonly) bool hasRefinementValue;
@property (nonatomic, readonly) bool hasRefinementValueMetadata;
@property (nonatomic) bool hasSelectionFromQuery;
@property (nonatomic) bool hasSelectionFromQuerySequenceNumber;
@property (nonatomic, retain) NSString *refinementKey;
@property (nonatomic) int refinementMetadataDefaultType;
@property (nonatomic, retain) NSString *refinementValue;
@property (nonatomic, retain) NSData *refinementValueMetadata;
@property (nonatomic) bool selectionFromQuery;
@property (nonatomic) unsigned int selectionFromQuerySequenceNumber;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRefinementMetadataDefaultType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRefinementKey;
- (bool)hasRefinementMetadataDefaultType;
- (bool)hasRefinementValue;
- (bool)hasRefinementValueMetadata;
- (bool)hasSelectionFromQuery;
- (bool)hasSelectionFromQuerySequenceNumber;
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
- (id)refinementKey;
- (int)refinementMetadataDefaultType;
- (id)refinementMetadataDefaultTypeAsString:(int)arg1;
- (id)refinementValue;
- (id)refinementValueMetadata;
- (bool)selectionFromQuery;
- (unsigned int)selectionFromQuerySequenceNumber;
- (void)setHasRefinementMetadataDefaultType:(bool)arg1;
- (void)setHasSelectionFromQuery:(bool)arg1;
- (void)setHasSelectionFromQuerySequenceNumber:(bool)arg1;
- (void)setRefinementKey:(id)arg1;
- (void)setRefinementMetadataDefaultType:(int)arg1;
- (void)setRefinementValue:(id)arg1;
- (void)setRefinementValueMetadata:(id)arg1;
- (void)setSelectionFromQuery:(bool)arg1;
- (void)setSelectionFromQuerySequenceNumber:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
