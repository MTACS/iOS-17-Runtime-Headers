
@interface _PSMetricsTrialIdentifierInternal : NSObject {
    void deployment;
    void experiment;
    void treatment;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (id)initWithExperiment:(id)arg1 treatment:(id)arg2 deployment:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
