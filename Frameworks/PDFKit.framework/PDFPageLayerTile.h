
@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate> {
    PDFRenderingProperties * _renderingProperties;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rootViewFrame;
    int  generationID;
    _Atomic bool  hasContent;
    _Atomic bool  isWorking;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  originalFrame;
    PDFPageLayer * pageLayer;
    PDFTileSurface * pageSurface;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  renderingTransform;
    double  tileContentsScale;
}

@property (retain) PDFRenderingProperties *renderingProperties;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rootViewFrame;

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)hasContent;
- (void)hasStartedWork;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageLayer:(id)arg2 withRenderingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 tileContentsScale:(double)arg4 generationID:(int)arg5;
- (bool)isWorking;
- (void)recievePDFTileSurface:(id)arg1;
- (id)renderingProperties;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootViewFrame;
- (void)setRenderingProperties:(id)arg1;
- (void)setRootViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
