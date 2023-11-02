
@interface VUIFamilySharingMediaCollection : VUIMediaCollection {
    NSString * _amsSeasonIdentifier;
    NSString * _amsShowIdentifier;
    NSString * _artworkURL;
    VUIFamilySharingEntity * _entity;
    NSArray * _seasonNumbers;
}

@property (nonatomic, retain) NSString *amsSeasonIdentifier;
@property (nonatomic, retain) NSString *amsShowIdentifier;
@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic, retain) VUIFamilySharingEntity *entity;
@property (nonatomic, retain) NSArray *seasonNumbers;

- (void).cxx_destruct;
- (id)amsSeasonIdentifier;
- (id)amsShowIdentifier;
- (id)artworkURL;
- (id)contentDescription;
- (id)contentRating;
- (id)duration;
- (id)entity;
- (id)genreTitle;
- (id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3;
- (id)releaseDate;
- (id)releaseYear;
- (id)seasonCount;
- (id)seasonNumber;
- (id)seasonNumbers;
- (void)setAmsSeasonIdentifier:(id)arg1;
- (void)setAmsShowIdentifier:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setSeasonNumbers:(id)arg1;
- (id)showTitle;
- (id)title;

@end
