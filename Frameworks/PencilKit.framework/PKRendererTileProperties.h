
@interface PKRendererTileProperties : NSObject <NSCopying> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _drawingTransform;
    long long  _level;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    bool  _sixChannelMode;
}

@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } drawingTransform;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) bool sixChannelMode;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (unsigned long long)hash;
- (id)initWithLevel:(long long)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 drawingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 sixChannelMode:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (long long)level;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)sixChannelMode;

@end
