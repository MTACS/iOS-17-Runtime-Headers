
@interface FigCaptionLayerPrivate : NSObject {
    NSMutableArray * captionBackdropLayers;
    NSMutableArray * captionElementLayers;
    struct FigGeometryMargins { 
        struct FigGeometryDimension { 
            double value; 
            unsigned int units; 
            unsigned int flags; 
        } left; 
        struct FigGeometryDimension { 
            double value; 
            unsigned int units; 
            unsigned int flags; 
        } right; 
        struct FigGeometryDimension { 
            double value; 
            unsigned int units; 
            unsigned int flags; 
        } top; 
        struct FigGeometryDimension { 
            double value; 
            unsigned int units; 
            unsigned int flags; 
        } bottom; 
    }  captionsAvoidanceMargins;
    unsigned char  enableBackdrop;
    unsigned char  enableGMSpew;
    struct OpaqueFigReentrantMutex { } * layoutSublayersMutex;
    NSMutableDictionary * options;
    struct OpaqueFigSimpleMutex { } * renderMutex;
    struct OpaqueFigCFCaptionRenderer { } * renderer;
    bool  separated;
    bool  separatedUpdated;
    unsigned char  shouldDrawGrid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  videoRelativeToViewport;
}

@end
