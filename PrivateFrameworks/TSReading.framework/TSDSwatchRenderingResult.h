
@interface TSDSwatchRenderingResult : NSObject {
    struct CGImage { } * background;
    struct CGImage { } * foreground;
}

@property (nonatomic, readonly) struct CGImage { }*background;
@property (nonatomic, readonly) struct CGImage { }*foreground;

+ (id)renderingResultWithForeground:(struct CGImage { }*)arg1 background:(struct CGImage { }*)arg2;

- (struct CGImage { }*)background;
- (void)dealloc;
- (struct CGImage { }*)foreground;

@end
