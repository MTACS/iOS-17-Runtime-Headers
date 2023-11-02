
@interface _NSCGTextGraphicsContext : NSObject <NSTextGraphicsContextInternal> {
    struct CGContext { } * _context;
}

@property (readonly) struct CGContext { }*CGContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDrawingToScreen, readonly) bool drawingToScreen;
@property (getter=isFlipped, readonly) bool flipped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)graphicsContextForApplicationFrameworkContext:(long long)arg1;

- (struct CGContext { }*)CGContext;
- (void)becomeCurrentGraphicsContextDuringBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithCGContext:(struct CGContext { }*)arg1;
- (bool)isDrawingToScreen;
- (bool)isFlipped;
- (void)restoreGraphicsState;
- (void)saveGraphicsState;

@end
