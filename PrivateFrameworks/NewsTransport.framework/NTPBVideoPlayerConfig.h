
@interface NTPBVideoPlayerConfig : PBCodable <NSCopying> {
    NSString * _discoverMoreVideosSubtitle;
    NSString * _discoverMoreVideosTitle;
    NSString * _discoverMoreVideosUrl;
}

@property (nonatomic, retain) NSString *discoverMoreVideosSubtitle;
@property (nonatomic, retain) NSString *discoverMoreVideosTitle;
@property (nonatomic, retain) NSString *discoverMoreVideosUrl;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosSubtitle;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosTitle;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosUrl;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoverMoreVideosSubtitle;
- (id)discoverMoreVideosTitle;
- (id)discoverMoreVideosUrl;
- (bool)hasDiscoverMoreVideosSubtitle;
- (bool)hasDiscoverMoreVideosTitle;
- (bool)hasDiscoverMoreVideosUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDiscoverMoreVideosSubtitle:(id)arg1;
- (void)setDiscoverMoreVideosTitle:(id)arg1;
- (void)setDiscoverMoreVideosUrl:(id)arg1;
- (void)writeTo:(id)arg1;

@end
