
@interface HKGraphTile : NSObject <CALayerDelegate> {
    CALayer * _caLayer;
    long long  _configurationChangedCounter;
    long long  _currentColumn;
    _HKGraphTileRenderToImage * _currentImageRenderer;
    <HKGraphTileDrawingDelegate> * _drawingDelegate;
    HKGraphViewTileThread * _graphViewTileThread;
    double  _lastImageAssignmentTime;
    UIView * _parentView;
    bool  _tileDisplayedSinceSetNeedsDisplay;
}

@property (nonatomic, retain) CALayer *caLayer;
@property (nonatomic) long long configurationChangedCounter;
@property (nonatomic, readonly) long long currentColumn;
@property (nonatomic, retain) _HKGraphTileRenderToImage *currentImageRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <HKGraphTileDrawingDelegate> *drawingDelegate;
@property (nonatomic, readonly) HKGraphViewTileThread *graphViewTileThread;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic) double lastImageAssignmentTime;
@property (nonatomic, readonly) UIView *parentView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tileDisplayedSinceSetNeedsDisplay;

- (void).cxx_destruct;
- (void)_handlePostRenderOperations;
- (id)_imageRendererForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)caLayer;
- (long long)configurationChangedCounter;
- (void)configureTileWithScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 column:(long long)arg2;
- (long long)currentColumn;
- (id)currentImageRenderer;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)drawingDelegate;
- (id)graphViewTileThread;
- (bool)hidden;
- (id)initWithParentView:(id)arg1 graphViewTileThread:(id)arg2;
- (double)lastImageAssignmentTime;
- (id)parentView;
- (void)prepareTileForReuse;
- (void)refreshTileContent;
- (void)renderTileInBackgroundWithRenderer:(id)arg1 tileSize:(struct CGSize { double x1; double x2; })arg2 configurationChangedCounter:(long long)arg3;
- (void)setCaLayer:(id)arg1;
- (void)setConfigurationChangedCounter:(long long)arg1;
- (void)setCurrentImageRenderer:(id)arg1;
- (void)setDrawingDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLastImageAssignmentTime:(double)arg1;
- (bool)tileDisplayedSinceSetNeedsDisplay;

@end
