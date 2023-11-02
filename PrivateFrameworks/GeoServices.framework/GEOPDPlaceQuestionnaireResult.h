
@interface GEOPDPlaceQuestionnaireResult : PBCodable <NSCopying> {
    bool  _alwaysPositionInitialRatingCtaTowardsTop;
    bool  _collectPhotos;
    struct { 
        unsigned int has_status : 1; 
        unsigned int has_alwaysPositionInitialRatingCtaTowardsTop : 1; 
        unsigned int has_collectPhotos : 1; 
        unsigned int has_isOverride : 1; 
        unsigned int has_suppressOnExistingRichData : 1; 
        unsigned int read_historicalMapsIds : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_photoConstraints : 1; 
        unsigned int read_scorecardLayout : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _historicalMapsIds;
    bool  _isOverride;
    GEOPDMapsIdentifier * _mapsId;
    GEOPDPhotoConstraints * _photoConstraints;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDScorecardLayout * _scorecardLayout;
    int  _status;
    bool  _suppressOnExistingRichData;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
