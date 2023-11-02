
@interface GEORPFeedbackCoordinateField : PBCodable <NSCopying> {
    GEOLatLng * _edited;
    GEORPFeedbackTileFeatureInfo * _editedTile;
    struct { 
        unsigned int read_editedTile : 1; 
        unsigned int read_edited : 1; 
        unsigned int read_originalTile : 1; 
        unsigned int read_original : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLatLng * _original;
    GEORPFeedbackTileFeatureInfo * _originalTile;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOLatLng *edited;
@property (nonatomic, retain) GEORPFeedbackTileFeatureInfo *editedTile;
@property (nonatomic, readonly) bool hasEdited;
@property (nonatomic, readonly) bool hasEditedTile;
@property (nonatomic, readonly) bool hasOriginal;
@property (nonatomic, readonly) bool hasOriginalTile;
@property (nonatomic, retain) GEOLatLng *original;
@property (nonatomic, retain) GEORPFeedbackTileFeatureInfo *originalTile;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)edited;
- (id)editedTile;
- (bool)hasEdited;
- (bool)hasEditedTile;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOriginal;
- (bool)hasOriginalTile;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)original;
- (id)originalTile;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEdited:(id)arg1;
- (void)setEditedTile:(id)arg1;
- (void)setOriginal:(id)arg1;
- (void)setOriginalTile:(id)arg1;
- (void)writeTo:(id)arg1;

@end
