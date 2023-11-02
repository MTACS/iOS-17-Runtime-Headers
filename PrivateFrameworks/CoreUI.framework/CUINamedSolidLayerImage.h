
@interface CUINamedSolidLayerImage : CUINamedImage <CUINamedLayerImageProtocol> {
    int  _blendMode;
    TXRTexture * _edgeTXR;
    CUINamedTexture * _edgeTexture;
    bool  _fixedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    TXRTexture * _gradientTXR;
    CUINamedTexture * _gradientTexture;
    double  _opacity;
}

@property (nonatomic) int blendMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fixedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic) double opacity;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;

- (int)blendMode;
- (void)dealloc;
- (id)edgeDefinitionTextureWithBufferAllocator:(id)arg1;
- (bool)fixedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)gradientTextureWithBufferAllocator:(id)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (double)opacity;
- (void)setBlendMode:(int)arg1;
- (void)setFixedFrame:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOpacity:(double)arg1;

@end
