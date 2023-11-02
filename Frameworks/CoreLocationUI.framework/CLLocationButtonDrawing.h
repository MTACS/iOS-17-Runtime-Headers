
@interface CLLocationButtonDrawing : NSObject <UISDrawing> {
    CLLocationButtonTag * _currentTag;
    struct CGSize { 
        double width; 
        double height; 
    }  _engravedSize;
    UISVectorGlyphDrawing * _glyphDrawing;
    NSString * _localizedTitle;
    struct CGSize { 
        double width; 
        double height; 
    }  _neededSize;
    bool  _remote;
    unsigned int  _secureName;
    UISSlotStyle * _style;
    UISTextLineDrawing * _textDrawing;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic) struct CGSize { double x1; double x2; } engravedSize;
@property (nonatomic, retain) UISVectorGlyphDrawing *glyphDrawing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic) struct CGSize { double x1; double x2; } neededSize;
@property (nonatomic, readonly) unsigned int secureName;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISTextLineDrawing *textDrawing;

+ (id)_drawingWithStyle:(id)arg1 tag:(id)arg2 remote:(bool)arg3;

- (void).cxx_destruct;
- (void)_computeImageMetrics;
- (void)drawInContext:(struct CGContext { }*)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })drawingSize;
- (struct CGSize { double x1; double x2; })engravedSize;
- (id)glyphDrawing;
- (struct CGImage { }*)imageWithStyle:(id)arg1 tag:(id)arg2 forRemote:(bool)arg3;
- (id)initWithStyle:(id)arg1 tag:(id)arg2 remote:(bool)arg3;
- (id)localizedTitle;
- (struct CGSize { double x1; double x2; })neededSize;
- (unsigned int)secureName;
- (void)setEngravedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGlyphDrawing:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setNeededSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextDrawing:(id)arg1;
- (id)textDrawing;

@end
