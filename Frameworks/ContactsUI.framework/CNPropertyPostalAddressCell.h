
@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell {
    UIImageView * _mapImageView;
    bool  _shouldUseMapTiles;
    <CNCancelable> * _tileGeneratorToken;
}

@property (nonatomic, retain) UIImageView *mapImageView;
@property (nonatomic) bool shouldUseMapTiles;
@property (nonatomic, retain) <CNCancelable> *tileGeneratorToken;

- (void).cxx_destruct;
- (void)dealloc;
- (void)generateAndSetMapTile;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)mapImageView;
- (void)prepareForReuse;
- (void)setMapImage:(id)arg1;
- (void)setMapImageView:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setShouldUseMapTiles:(bool)arg1;
- (void)setTileGeneratorToken:(id)arg1;
- (bool)shouldUseMapTiles;
- (bool)supportsTintColorValue;
- (void)tapGesture:(id)arg1;
- (id)tileGeneratorToken;
- (void)traitCollectionDidChange:(id)arg1;
- (id)variableConstraints;

@end
