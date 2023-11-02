
@interface MPTiledArtworkRepresentationToken : NSObject {
    <NSCopying> * _revisionIdentifier;
    NSArray * _tileArtworkVisualIdenticalityIdentifiers;
}

@property (nonatomic, copy) <NSCopying> *revisionIdentifier;
@property (nonatomic, copy) NSArray *tileArtworkVisualIdenticalityIdentifiers;

- (void).cxx_destruct;
- (id)revisionIdentifier;
- (void)setRevisionIdentifier:(id)arg1;
- (void)setTileArtworkVisualIdenticalityIdentifiers:(id)arg1;
- (id)tileArtworkVisualIdenticalityIdentifiers;

@end
