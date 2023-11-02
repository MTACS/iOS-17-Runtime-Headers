
@interface HTHang : NSObject {
    NSString * _bundleId;
    NSDate * _createdAt;
    double  _duration;
    long long  _durationLevel;
    NSString * _hangId;
    NSString * _processPath;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic) double duration;
@property (nonatomic, readonly) long long durationLevel;
@property (nonatomic, copy) NSString *hangId;
@property (nonatomic, retain) NSString *processPath;

- (void).cxx_destruct;
- (id)bundleId;
- (id)createdAt;
- (double)duration;
- (long long)durationLevel;
- (id)hangId;
- (id)processPath;
- (void)setBundleId:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHangId:(id)arg1;
- (void)setProcessPath:(id)arg1;

@end
