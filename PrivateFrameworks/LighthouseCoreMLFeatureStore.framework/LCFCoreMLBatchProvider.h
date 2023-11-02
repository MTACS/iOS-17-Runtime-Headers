
@interface LCFCoreMLBatchProvider : NSObject <MLBatchProvider> {
    long long  _count;
    NSArray * _featureProviders;
    NSString * _featureStoreKey;
    NSDate * _timeFirst;
    NSDate * _timeLast;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSArray *featureProviders;
@property (nonatomic, readonly) NSString *featureStoreKey;
@property (nonatomic, readonly) NSDate *timeFirst;
@property (nonatomic, readonly) NSDate *timeLast;

+ (id)fromMLProvider:(id)arg1;

- (void).cxx_destruct;
- (long long)count;
- (id)featureProviders;
- (id)featureStoreKey;
- (id)featuresAtIndex:(long long)arg1;
- (id)init:(id)arg1 featureProviders:(id)arg2;
- (id)timeFirst;
- (id)timeLast;

@end
