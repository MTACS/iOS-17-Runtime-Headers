
@interface _HKGraphTileBackgroundRenderingContext : NSObject <HKGraphViewTileThreadRenderer> {
    long long  _configurationChangedCounter;
    HKGraphTile * _graphTile;
    HKGraphViewRenderer * _graphViewRenderer;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
}

@property (nonatomic, readonly) long long configurationChangedCounter;
@property (nonatomic, readonly) HKGraphTile *graphTile;
@property (nonatomic, readonly) HKGraphViewRenderer *graphViewRenderer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tileSize;

- (void).cxx_destruct;
- (long long)configurationChangedCounter;
- (id)debugDescription;
- (id)graphTile;
- (id)graphViewRenderer;
- (id)initWithGraphTile:(id)arg1 graphViewRenderer:(id)arg2 tileSize:(struct CGSize { double x1; double x2; })arg3 configurationChangedCounter:(long long)arg4;
- (void)renderTileContent;
- (bool)sameForRendering:(id)arg1;
- (struct CGSize { double x1; double x2; })tileSize;

@end
