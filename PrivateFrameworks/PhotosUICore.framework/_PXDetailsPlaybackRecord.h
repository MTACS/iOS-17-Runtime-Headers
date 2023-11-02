
@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord {
    struct PXTileIdentifier { 
        unsigned long long length; 
        unsigned long long index[10]; 
    }  _tileIdentifier;
}

@property (nonatomic, readonly) <_PXDetailsAutoplayTile> *geometryReference;
@property (nonatomic) struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; } tileIdentifier;

- (long long)desiredPlayState;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })tileIdentifier;

@end
