
@interface ContextualActionPredictionsDataPhotoFeatures : PBCodable <NSCopying> {
    struct { 
        unsigned int isPhotoWithPeople : 1; 
        unsigned int isPhotoWithText : 1; 
        unsigned int isRotationCandidate : 1; 
        unsigned int isScreenshot : 1; 
        unsigned int isTrimCandidate : 1; 
    }  _has;
    bool  _isPhotoWithPeople;
    bool  _isPhotoWithText;
    bool  _isRotationCandidate;
    bool  _isScreenshot;
    bool  _isTrimCandidate;
}

@property (nonatomic) bool hasIsPhotoWithPeople;
@property (nonatomic) bool hasIsPhotoWithText;
@property (nonatomic) bool hasIsRotationCandidate;
@property (nonatomic) bool hasIsScreenshot;
@property (nonatomic) bool hasIsTrimCandidate;
@property (nonatomic) bool isPhotoWithPeople;
@property (nonatomic) bool isPhotoWithText;
@property (nonatomic) bool isRotationCandidate;
@property (nonatomic) bool isScreenshot;
@property (nonatomic) bool isTrimCandidate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsPhotoWithPeople;
- (bool)hasIsPhotoWithText;
- (bool)hasIsRotationCandidate;
- (bool)hasIsScreenshot;
- (bool)hasIsTrimCandidate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPhotoWithPeople;
- (bool)isPhotoWithText;
- (bool)isRotationCandidate;
- (bool)isScreenshot;
- (bool)isTrimCandidate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsPhotoWithPeople:(bool)arg1;
- (void)setHasIsPhotoWithText:(bool)arg1;
- (void)setHasIsRotationCandidate:(bool)arg1;
- (void)setHasIsScreenshot:(bool)arg1;
- (void)setHasIsTrimCandidate:(bool)arg1;
- (void)setIsPhotoWithPeople:(bool)arg1;
- (void)setIsPhotoWithText:(bool)arg1;
- (void)setIsRotationCandidate:(bool)arg1;
- (void)setIsScreenshot:(bool)arg1;
- (void)setIsTrimCandidate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
