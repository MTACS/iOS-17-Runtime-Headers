
@interface PFStoryClusteringProperties : NSObject {
    NSString * _algorithm;
    NSDictionary * _algorithmProperties;
    NSDictionary * _distanceWeights;
}

@property (nonatomic, readonly) NSString *algorithm;
@property (nonatomic, readonly) NSDictionary *algorithmProperties;
@property (nonatomic, readonly) NSDictionary *distanceWeights;

- (void).cxx_destruct;
- (id)algorithm;
- (id)algorithmProperties;
- (id)description;
- (id)distanceWeights;
- (id)initWithAlgorithmName:(id)arg1 algorithmProperties:(id)arg2 distanceWeights:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPFStoryClusteringProperties:(id)arg1;

@end
