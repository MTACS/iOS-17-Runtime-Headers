
@interface UIObjectCompat : NSObject {
    void boundingBox;
    void children;
    void clickable;
    void confidence;
    void label;
    void text;
}

@property (nonatomic, retain) _TtC15UIUnderstanding16PixelBoundingBox *boundingBox;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, readonly) bool clickable;
@property (nonatomic) double confidence;
@property (nonatomic) long long label;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)boundingBox;
- (id)children;
- (bool)clickable;
- (double)confidence;
- (id)init;
- (id)initWithLabel:(long long)arg1 confidence:(double)arg2 text:(id)arg3 boundingBox:(id)arg4 children:(id)arg5 clickable:(bool)arg6;
- (long long)label;
- (void)setBoundingBox:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setLabel:(long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
