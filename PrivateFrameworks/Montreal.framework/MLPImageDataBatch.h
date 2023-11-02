
@interface MLPImageDataBatch : MLPDataBatch {
    NSArray * _images;
    NSArray * _labels;
    NSArray * _lossLabels;
}

@property (retain) NSArray *images;
@property (retain) NSArray *labels;
@property (retain) NSArray *lossLabels;

- (void).cxx_destruct;
- (id)images;
- (id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3;
- (id)labels;
- (id)lossLabels;
- (void)setImages:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLossLabels:(id)arg1;

@end
