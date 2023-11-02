
@interface DYShaderAnalyzerResult : NSObject {
    NSDictionary * _drawCallCost;
    NSDictionary * _drawCallPerLineCost;
    NSDictionary * _perFileCost;
    NSDictionary * _perFileLineCostDictForCI;
    double  _totalCost;
    NSDictionary * _totalPerLineCost;
}

@property (nonatomic, retain) NSDictionary *drawCallCost;
@property (nonatomic, retain) NSDictionary *drawCallPerLineCost;
@property (nonatomic, retain) NSDictionary *perFileCost;
@property (nonatomic, retain) NSDictionary *perFileLineCostDictForCI;
@property (nonatomic) double totalCost;
@property (nonatomic, retain) NSDictionary *totalPerLineCost;

- (void).cxx_destruct;
- (id)drawCallCost;
- (id)drawCallPerLineCost;
- (id)init;
- (id)perFileCost;
- (id)perFileLineCostDictForCI;
- (void)setDrawCallCost:(id)arg1;
- (void)setDrawCallPerLineCost:(id)arg1;
- (void)setPerFileCost:(id)arg1;
- (void)setPerFileLineCostDictForCI:(id)arg1;
- (void)setTotalCost:(double)arg1;
- (void)setTotalPerLineCost:(id)arg1;
- (double)totalCost;
- (id)totalPerLineCost;

@end
