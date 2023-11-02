
@interface TCVegaRenderer : NSObject {
    JSContext * context;
    double  scaleFactor;
    NSString * spec;
    TCVegaCGCanvas * vegaCanvas;
    TCVegaJSDocument * vegaJSDocument;
}

@property (retain) JSContext *context;
@property (nonatomic) double scaleFactor;
@property (nonatomic, retain) NSString *spec;
@property (nonatomic, retain) TCVegaCGCanvas *vegaCanvas;
@property (nonatomic, retain) TCVegaJSDocument *vegaJSDocument;

+ (id)vegaJS;
+ (id)vegaliteJS;
+ (id)vg2canvasJS;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)context;
- (id)cursor;
- (unsigned long long)height;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (id)initWithSpec:(id)arg1 config:(id)arg2 scaleFactor:(double)arg3;
- (double)scaleFactor;
- (void)setContext:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSpec:(id)arg1;
- (void)setVegaCanvas:(id)arg1;
- (void)setVegaJSDocument:(id)arg1;
- (id)spec;
- (void)triggerEventWithType:(id)arg1 event:(id)arg2;
- (id)vegaCanvas;
- (id)vegaContext;
- (id)vegaJSDocument;
- (unsigned long long)width;

@end
