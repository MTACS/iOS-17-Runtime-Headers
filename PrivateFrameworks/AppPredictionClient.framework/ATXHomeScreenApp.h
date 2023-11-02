
@interface ATXHomeScreenApp : NSObject <ATXHomeScreenLeafIconRepresentable> {
    NSString * _bundleId;
    unsigned long long  _numAppLaunches;
    unsigned long long  _numUniqueDays;
    ATXHomeScreenPage * _page;
    NSString * _predictionSource;
    double  _score;
}

@property (nonatomic, readonly, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numAppLaunches;
@property (nonatomic, readonly) unsigned long long numUniqueDays;
@property (nonatomic) ATXHomeScreenPage *page;
@property (nonatomic, copy) NSString *predictionSource;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)description;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)arg1;
- (id)initWithBundleId:(id)arg1 predictionSource:(id)arg2;
- (id)initWithBundleId:(id)arg1 predictionSource:(id)arg2 score:(double)arg3;
- (id)initWithBundleId:(id)arg1 predictionSource:(id)arg2 score:(double)arg3 uniqueDaysLaunched:(unsigned long long)arg4 rawLaunchCount:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenApp:(id)arg1;
- (unsigned long long)numAppLaunches;
- (unsigned long long)numUniqueDays;
- (id)page;
- (id)predictionSource;
- (double)score;
- (void)setPage:(id)arg1;
- (void)setPredictionSource:(id)arg1;

@end
