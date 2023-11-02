
@interface NUDisplay_iOS : NSObject <NUDisplay> {
    CADisplay * _display;
}

@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CADisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) NSString *name;
@property (readonly) NUPixelFormat *pixelFormat;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

+ (id)displays;
+ (id)mainDisplay;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)description;
- (id)display;
- (id)identifier;
- (id)init;
- (id)initWithCADisplay:(id)arg1;
- (id)name;
- (id)pixelFormat;
- (struct { long long x1; long long x2; })size;
- (bool)wideColor;

@end
