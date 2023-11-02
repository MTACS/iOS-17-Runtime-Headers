
@interface PAEKeyerHistogram : NSObject <NSSecureCoding> {
    void * _histogram;
    float  _scale;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void*)getHistogram;
- (float)getHistogramScale;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHistogram:(void*)arg1;
- (void)setHistogramArray:(id)arg1;
- (void)setHistogramScale:(float)arg1;

@end
