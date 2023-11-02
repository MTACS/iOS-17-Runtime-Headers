
@interface SHRecorderConfiguration : NSObject {
    NSDictionary * _cacheValues;
    AMSPromise * _promise;
}

@property (nonatomic, readonly) NSDictionary *cacheValues;
@property (nonatomic, readonly) AMSPromise *promise;

- (void).cxx_destruct;
- (long long)availableRecordersForClientIdentifier:(id)arg1;
- (id)cacheValues;
- (id)cacheValuesForIdentifier:(id)arg1;
- (id)initWithPromise:(id)arg1;
- (id)initWithValues:(id)arg1;
- (id)promise;

@end
