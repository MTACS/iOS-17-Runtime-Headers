
@interface MLPSeqDataBatch : MLPDataBatch {
    MLPNDArrayLossLabels * _combinedLossLabels;
    unsigned long long  _labelsCount;
    NSArray * _matrix;
}

@property (retain) MLPNDArrayLossLabels *combinedLossLabels;
@property unsigned long long labelsCount;
@property (retain) NSArray *matrix;

- (void).cxx_destruct;
- (id)combinedLossLabels;
- (id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3;
- (unsigned long long)labelsCount;
- (id)matrix;
- (void)setCombinedLossLabels:(id)arg1;
- (void)setLabelsCount:(unsigned long long)arg1;
- (void)setMatrix:(id)arg1;

@end
