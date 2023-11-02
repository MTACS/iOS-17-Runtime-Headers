
@interface MPStoreItemImportAlbumArtistData : ML3StoreItemAlbumArtistData {
    NSArray * _importElements;
}

@property (nonatomic, readonly) NSArray *importElements;

- (void).cxx_destruct;
- (id)importElements;
- (id)initWithAlbumArtistImportElements:(id)arg1;

@end
