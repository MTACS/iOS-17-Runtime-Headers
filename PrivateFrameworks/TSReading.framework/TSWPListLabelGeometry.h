
@interface TSWPListLabelGeometry : NSObject {
    double  mBaselineOffset;
    double  mScale;
    bool  mScaleWithText;
}

@property (nonatomic) double baselineOffset;
@property (nonatomic) double scale;
@property (nonatomic) bool scaleWithText;

+ (id)listLabelGeometry;

- (double)baselineOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithScale:(double)arg1 scaleWithText:(bool)arg2 baselineOffset:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)scale;
- (bool)scaleWithText;
- (void)setBaselineOffset:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setScaleWithText:(bool)arg1;

@end
