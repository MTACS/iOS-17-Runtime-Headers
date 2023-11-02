
@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying> {
    NSString * _album;
    NSString * _artist;
    NSNumber * _durationInSeconds;
    NSSet * _genres;
    NSString * _source;
    NSString * _title;
}

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) NSNumber *durationInSeconds;
@property (nonatomic, copy) NSSet *genres;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)durationInSeconds;
- (id)genres;
- (unsigned long long)hash;
- (id)initWithDuetKnowledgeEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventMetadata:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDurationInSeconds:(id)arg1;
- (void)setGenres:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)source;
- (id)title;

@end
