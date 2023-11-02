
@interface VUIFamilySharingRelationship : NSObject {
    NSString * _artworkURL;
    VUIContentRating * _contentRating;
    NSString * _genreTitle;
    NSString * _identifier;
    NSDate * _releaseDate;
    NSString * _standardDescription;
}

@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic, retain) VUIContentRating *contentRating;
@property (nonatomic, retain) NSString *genreTitle;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *releaseDate;
@property (nonatomic, retain) NSString *standardDescription;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)contentRating;
- (id)genreTitle;
- (id)identifier;
- (id)releaseDate;
- (void)setArtworkURL:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setGenreTitle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setStandardDescription:(id)arg1;
- (id)standardDescription;

@end
