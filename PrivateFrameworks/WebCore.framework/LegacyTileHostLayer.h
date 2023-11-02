
@interface LegacyTileHostLayer : CALayer {
    void * _tileGrid;
}

- (id)actionForKey:(id)arg1;
- (id)initWithTileGrid:(void*)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;

@end
