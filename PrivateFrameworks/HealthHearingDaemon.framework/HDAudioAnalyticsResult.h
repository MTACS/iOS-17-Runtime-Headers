
@interface HDAudioAnalyticsResult : NSObject {
    NSError * _error;
    long long  _status;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (id)error;
- (id)initWithStatus:(long long)arg1 error:(id)arg2;
- (long long)status;

@end
