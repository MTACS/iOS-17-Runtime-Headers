
@interface PPLocalTemporalClusterStore : NSObject {
    PPTemporalClusterStorage * _storage;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStorage:(id)arg1;
- (id)rankedTemporalClusterForStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;

@end
