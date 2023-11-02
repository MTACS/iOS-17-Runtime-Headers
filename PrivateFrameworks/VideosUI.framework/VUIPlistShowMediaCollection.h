
@interface VUIPlistShowMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating> {
    VUIPlistMediaDatabaseShow * _databaseShow;
}

@property (nonatomic, retain) VUIPlistMediaDatabaseShow *databaseShow;

- (void).cxx_destruct;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)coverArtImageIdentifier;
- (id)databaseShow;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 databaseShow:(id)arg2 requestedProperties:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)mediaItemCount;
- (id)playedState;
- (void)setDatabaseShow:(id)arg1;

@end
