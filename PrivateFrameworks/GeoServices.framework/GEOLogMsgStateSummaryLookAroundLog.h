
@interface GEOLogMsgStateSummaryLookAroundLog : PBCodable <NSCopying> {
    unsigned int  _durationSec;
    struct { 
        unsigned int has_durationSec : 1; 
        unsigned int has_hadMoveActions : 1; 
        unsigned int has_hadPanActions : 1; 
        unsigned int has_hadPoiTapActions : 1; 
        unsigned int has_hadShareActions : 1; 
        unsigned int has_hadZoomActions : 1; 
    }  _flags;
    bool  _hadMoveActions;
    bool  _hadPanActions;
    bool  _hadPoiTapActions;
    bool  _hadShareActions;
    bool  _hadZoomActions;
}

@property (nonatomic) unsigned int durationSec;
@property (nonatomic) bool hadMoveActions;
@property (nonatomic) bool hadPanActions;
@property (nonatomic) bool hadPoiTapActions;
@property (nonatomic) bool hadShareActions;
@property (nonatomic) bool hadZoomActions;
@property (nonatomic) bool hasDurationSec;
@property (nonatomic) bool hasHadMoveActions;
@property (nonatomic) bool hasHadPanActions;
@property (nonatomic) bool hasHadPoiTapActions;
@property (nonatomic) bool hasHadShareActions;
@property (nonatomic) bool hasHadZoomActions;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationSec;
- (bool)hadMoveActions;
- (bool)hadPanActions;
- (bool)hadPoiTapActions;
- (bool)hadShareActions;
- (bool)hadZoomActions;
- (bool)hasDurationSec;
- (bool)hasHadMoveActions;
- (bool)hasHadPanActions;
- (bool)hasHadPoiTapActions;
- (bool)hasHadShareActions;
- (bool)hasHadZoomActions;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationSec:(unsigned int)arg1;
- (void)setHadMoveActions:(bool)arg1;
- (void)setHadPanActions:(bool)arg1;
- (void)setHadPoiTapActions:(bool)arg1;
- (void)setHadShareActions:(bool)arg1;
- (void)setHadZoomActions:(bool)arg1;
- (void)setHasDurationSec:(bool)arg1;
- (void)setHasHadMoveActions:(bool)arg1;
- (void)setHasHadPanActions:(bool)arg1;
- (void)setHasHadPoiTapActions:(bool)arg1;
- (void)setHasHadShareActions:(bool)arg1;
- (void)setHasHadZoomActions:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
