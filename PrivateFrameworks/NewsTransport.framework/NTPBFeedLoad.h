
@interface NTPBFeedLoad : PBCodable <NSCopying> {
    NSString * _feedId;
    int  _feedType;
    NSString * _feedViewExposureId;
    struct { 
        unsigned int feedType : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSString *feedViewExposureId;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasFeedViewExposureId;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasFeedViewExposureId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
