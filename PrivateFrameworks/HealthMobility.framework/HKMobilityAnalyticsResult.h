
@interface HKMobilityAnalyticsResult : NSObject {
    NSError * _error;
    unsigned long long  _status;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long status;

+ (id)resultWithStatus:(unsigned long long)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)error;
- (id)initWithStatus:(unsigned long long)arg1 error:(id)arg2;
- (unsigned long long)status;

@end
