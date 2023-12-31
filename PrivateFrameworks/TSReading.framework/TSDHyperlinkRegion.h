
@interface TSDHyperlinkRegion : NSObject {
    TSDBezierPath * mBezierPath;
    NSURL * mURL;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) TSDBezierPath *bezierPath;

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;

- (id)URL;
- (id)bezierPath;
- (void)dealloc;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;
- (void)setBezierPath:(id)arg1;
- (void)setURL:(id)arg1;

@end
