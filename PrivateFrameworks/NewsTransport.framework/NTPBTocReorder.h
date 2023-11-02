
@interface NTPBTocReorder : PBCodable <NSCopying> {
    NSString * _feedId;
    int  _feedType;
    struct { 
        unsigned int feedType : 1; 
        unsigned int tocNewIndex : 1; 
        unsigned int tocOldIndex : 1; 
    }  _has;
    NSData * _tocExposureId;
    int  _tocNewIndex;
    int  _tocOldIndex;
}

@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasTocExposureId;
@property (nonatomic) bool hasTocNewIndex;
@property (nonatomic) bool hasTocOldIndex;
@property (nonatomic, retain) NSData *tocExposureId;
@property (nonatomic) int tocNewIndex;
@property (nonatomic) int tocOldIndex;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasTocExposureId;
- (bool)hasTocNewIndex;
- (bool)hasTocOldIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasTocNewIndex:(bool)arg1;
- (void)setHasTocOldIndex:(bool)arg1;
- (void)setTocExposureId:(id)arg1;
- (void)setTocNewIndex:(int)arg1;
- (void)setTocOldIndex:(int)arg1;
- (id)tocExposureId;
- (int)tocNewIndex;
- (int)tocOldIndex;
- (void)writeTo:(id)arg1;

@end
