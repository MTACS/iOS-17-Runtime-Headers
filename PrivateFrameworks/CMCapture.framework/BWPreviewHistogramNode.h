
@interface BWPreviewHistogramNode : BWNode {
    bool  _ispHistogramDownsamplingEnabled;
    bool  _ispHistogramsEnabled;
    bool  _msrHistogramsEnabled;
}

@property (nonatomic) bool ispHistogramsEnabled;
@property (nonatomic) bool msrHistogramsEnabled;

+ (void)initialize;

- (id)init;
- (bool)ispHistogramsEnabled;
- (bool)msrHistogramsEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setIspHistogramsEnabled:(bool)arg1;
- (void)setMsrHistogramsEnabled:(bool)arg1;

@end
