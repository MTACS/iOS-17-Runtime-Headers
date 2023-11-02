
@interface _UIImageContentLayout : NSObject {
    double  _baselineOffsetFromBottom;
    double  _baselineOffsetFromTop;
    struct { 
        _UIImageContentRendition *rendition; 
        id contents; 
        double drawScale; 
    }  _contentInfo;
    id /* block */  _contentInfoGenerator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _contentsScaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentsSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentsTransform;
    struct { 
        unsigned int contentsIsCGImage : 1; 
        unsigned int rendersContentAtNaturalSize : 1; 
    }  _flags;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderSize;
}

@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) id contents;
@property (nonatomic, readonly) UIColor *contentsMultiplyColor;
@property (nonatomic, readonly) double contentsScaleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentsSize;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentsTransform;
@property (nonatomic, readonly) _UIImageContentRBSymbolConfiguration *rbSymbolConfiguration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderSize;

+ (id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contents;
- (id)contentsMultiplyColor;
- (double)contentsScaleFactor;
- (struct CGSize { double x1; double x2; })contentsSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (id)description;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)hasContents;
- (id)rbSymbolConfiguration;
- (struct CGSize { double x1; double x2; })renderSize;

@end
