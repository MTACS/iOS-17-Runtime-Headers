
@interface SignpostAggregationAccumulatorEntry : NSObject {
    SignpostAggregation * _accumulatedAggregation;
    NSString * _aggregationDescription;
    NSString * _category;
    bool  _includeRawIntervals;
    NSMutableDictionary * _mutableAggregationAdditionErrorCounts;
    NSMutableDictionary * _mutableAggregationCreationErrorCounts;
    NSString * _name;
    NSString * _subsystem;
}

@property (nonatomic, readonly) SignpostAggregation *accumulatedAggregation;
@property (nonatomic, readonly) NSDictionary *aggregationAdditionErrorCounts;
@property (nonatomic, readonly) NSDictionary *aggregationCreationErrorCounts;
@property (nonatomic, readonly) NSString *aggregationDescription;
@property (nonatomic, readonly) NSString *aggregationSignature;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) bool includeRawIntervals;
@property (nonatomic, readonly) NSMutableDictionary *mutableAggregationAdditionErrorCounts;
@property (nonatomic, readonly) NSMutableDictionary *mutableAggregationCreationErrorCounts;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *subsystem;

+ (void)_bumpErrorCount:(id)arg1 countDict:(id)arg2;

- (void).cxx_destruct;
- (void)_handleInterval:(id)arg1;
- (id)_initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 aggregationDescription:(id)arg4 includeRawIntervals:(bool)arg5;
- (id)accumulatedAggregation;
- (id)aggregationAdditionErrorCounts;
- (id)aggregationCreationErrorCounts;
- (id)aggregationDescription;
- (id)aggregationSignature;
- (id)category;
- (bool)includeRawIntervals;
- (id)mutableAggregationAdditionErrorCounts;
- (id)mutableAggregationCreationErrorCounts;
- (id)name;
- (id)subsystem;

@end
