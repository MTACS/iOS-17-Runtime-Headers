
@interface DEPatternParamsResult : NSObject {
    NSDictionary * _params;
    NSString * _patternId;
}

@property (nonatomic, retain) NSDictionary *params;
@property (nonatomic, retain) NSString *patternId;

- (void).cxx_destruct;
- (id)params;
- (id)patternId;
- (void)setParams:(id)arg1;
- (void)setPatternId:(id)arg1;

@end
