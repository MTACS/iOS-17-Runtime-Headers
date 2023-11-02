
@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {
    struct { 
        unsigned int has_labelType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_labelArtwork : 1; 
        unsigned int read_labelTextString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPBTransitArtwork * _labelArtwork;
    NSString * _labelTextString;
    int  _labelType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLabelArtwork;
@property (nonatomic, readonly) bool hasLabelTextString;
@property (nonatomic) bool hasLabelType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPBTransitArtwork *labelArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *labelArtwork;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, retain) NSString *labelTextString;
@property (nonatomic) int labelType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLabelType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabelArtwork;
- (bool)hasLabelTextString;
- (bool)hasLabelType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)labelArtwork;
- (id)labelString;
- (id)labelTextString;
- (int)labelType;
- (id)labelTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLabelType:(bool)arg1;
- (void)setLabelArtwork:(id)arg1;
- (void)setLabelTextString:(id)arg1;
- (void)setLabelType:(int)arg1;
- (unsigned long long)type;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
