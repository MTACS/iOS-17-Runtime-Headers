
@interface MLPNDArrayLossLabels : NSObject {
    NSArray * _labels;
    NSMutableArray * _largeReductionSumResult;
    NSMutableArray * _smallReductionSumResult;
}

@property (retain) NSArray *labels;
@property (retain) NSMutableArray *largeReductionSumResult;
@property (retain) NSMutableArray *smallReductionSumResult;

- (void).cxx_destruct;
- (id)init;
- (id)labels;
- (id)largeReductionSumResult;
- (void)setLabels:(id)arg1;
- (void)setLargeReductionSumResult:(id)arg1;
- (void)setSmallReductionSumResult:(id)arg1;
- (id)smallReductionSumResult;

@end
