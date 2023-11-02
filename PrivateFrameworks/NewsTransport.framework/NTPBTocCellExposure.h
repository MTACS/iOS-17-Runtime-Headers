
@interface NTPBTocCellExposure : PBCodable <NSCopying> {
    int  _displayRank;
    NTPBFeedCellExposure * _feedCellExposure;
    struct { 
        unsigned int displayRank : 1; 
        unsigned int rankInSection : 1; 
        unsigned int tocCellSection : 1; 
        unsigned int type : 1; 
        unsigned int isBadged : 1; 
    }  _has;
    bool  _isBadged;
    int  _rankInSection;
    NTPBTocCellExposureArticleElement * _tocCellExposureArticleElement;
    NSData * _tocCellExposureId;
    int  _tocCellSection;
    int  _type;
}

@property (nonatomic) int displayRank;
@property (nonatomic, retain) NTPBFeedCellExposure *feedCellExposure;
@property (nonatomic) bool hasDisplayRank;
@property (nonatomic, readonly) bool hasFeedCellExposure;
@property (nonatomic) bool hasIsBadged;
@property (nonatomic) bool hasRankInSection;
@property (nonatomic, readonly) bool hasTocCellExposureArticleElement;
@property (nonatomic, readonly) bool hasTocCellExposureId;
@property (nonatomic) bool hasTocCellSection;
@property (nonatomic) bool hasType;
@property (nonatomic) bool isBadged;
@property (nonatomic) int rankInSection;
@property (nonatomic, retain) NTPBTocCellExposureArticleElement *tocCellExposureArticleElement;
@property (nonatomic, retain) NSData *tocCellExposureId;
@property (nonatomic) int tocCellSection;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsTocCellSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)displayRank;
- (id)feedCellExposure;
- (bool)hasDisplayRank;
- (bool)hasFeedCellExposure;
- (bool)hasIsBadged;
- (bool)hasRankInSection;
- (bool)hasTocCellExposureArticleElement;
- (bool)hasTocCellExposureId;
- (bool)hasTocCellSection;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isBadged;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)rankInSection;
- (bool)readFrom:(id)arg1;
- (void)setDisplayRank:(int)arg1;
- (void)setFeedCellExposure:(id)arg1;
- (void)setHasDisplayRank:(bool)arg1;
- (void)setHasIsBadged:(bool)arg1;
- (void)setHasRankInSection:(bool)arg1;
- (void)setHasTocCellSection:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsBadged:(bool)arg1;
- (void)setRankInSection:(int)arg1;
- (void)setTocCellExposureArticleElement:(id)arg1;
- (void)setTocCellExposureId:(id)arg1;
- (void)setTocCellSection:(int)arg1;
- (void)setType:(int)arg1;
- (id)tocCellExposureArticleElement;
- (id)tocCellExposureId;
- (int)tocCellSection;
- (id)tocCellSectionAsString:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
