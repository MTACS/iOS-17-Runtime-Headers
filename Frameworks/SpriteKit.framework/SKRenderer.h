
@interface SKRenderer : NSObject {
    double  _currentTime;
    bool  _disableInput;
    bool  _hasRenderedForCurrentUpdate;
    bool  _needsInitialUpdate;
    SKScene * _nextScene;
    double  _previousTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _renderBounds;
    NSMutableDictionary * _renderOptions;
    SKScene * _scene;
    void * _skcRenderer;
    NSMapTable * _touchMap;
    SKTransition * _transition;
}

@property (nonatomic) bool ignoresSiblingOrder;
@property (nonatomic, retain) SKScene *scene;
@property (nonatomic) bool shouldCullNonVisibleNodes;
@property (nonatomic) bool showsDrawCount;
@property (nonatomic) bool showsFields;
@property (nonatomic) bool showsNodeCount;
@property (nonatomic) bool showsPhysics;
@property (nonatomic) bool showsQuadCount;

+ (id)rendererWithDevice:(id)arg1;

- (void).cxx_destruct;
- (id)_getOptions;
- (void)_initialize;
- (void)_notifyWillRenderContent;
- (void)_update:(double)arg1;
- (void)dealloc;
- (bool)ignoresSiblingOrder;
- (id)initWithSKCRenderer:(void*)arg1;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 commandBuffer:(id)arg2 renderPassDescriptor:(id)arg3;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 renderCommandEncoder:(id)arg2 renderPassDescriptor:(id)arg3 commandQueue:(id)arg4;
- (id)scene;
- (void)setIgnoresSiblingOrder:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setShouldCullNonVisibleNodes:(bool)arg1;
- (void)setShowsDrawCount:(bool)arg1;
- (void)setShowsFields:(bool)arg1;
- (void)setShowsNodeCount:(bool)arg1;
- (void)setShowsPhysics:(bool)arg1;
- (void)setShowsQuadCount:(bool)arg1;
- (bool)shouldCullNonVisibleNodes;
- (bool)showsDrawCount;
- (bool)showsFields;
- (bool)showsNodeCount;
- (bool)showsPhysics;
- (bool)showsQuadCount;
- (void)updateAtTime:(double)arg1;

@end
