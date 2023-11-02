
@interface VUIPlistSeasonMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating> {
    VUIPlistMediaDatabaseSeason * _databaseSeason;
}

@property (nonatomic, retain) VUIPlistMediaDatabaseSeason *databaseSeason;

- (void).cxx_destruct;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)coverArtImageIdentifier;
- (id)databaseSeason;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 databaseSeason:(id)arg2 requestedProperties:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)mediaItemCount;
- (id)playedState;
- (id)seasonNumber;
- (void)setDatabaseSeason:(id)arg1;
- (id)showIdentifier;
- (id)showTitle;

@end
