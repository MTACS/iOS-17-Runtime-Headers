
@interface VUIRootControllerConfig : NSObject {
    NSNumber * _criticalControllerLimit;
    NSArray * _doNotPurgeList;
    NSNumber * _normalControllerLimit;
    long long  _sidebarImagePrefetchBatchLimit;
    NSNumber * _warningControllerLimit;
}

@property (nonatomic, retain) NSNumber *criticalControllerLimit;
@property (nonatomic, retain) NSArray *doNotPurgeList;
@property (nonatomic, retain) NSNumber *normalControllerLimit;
@property (nonatomic) long long sidebarImagePrefetchBatchLimit;
@property (nonatomic, retain) NSNumber *warningControllerLimit;

- (void).cxx_destruct;
- (id)criticalControllerLimit;
- (id)doNotPurgeList;
- (id)init;
- (id)normalControllerLimit;
- (void)setCriticalControllerLimit:(id)arg1;
- (void)setDoNotPurgeList:(id)arg1;
- (void)setNormalControllerLimit:(id)arg1;
- (void)setSidebarImagePrefetchBatchLimit:(long long)arg1;
- (void)setWarningControllerLimit:(id)arg1;
- (long long)sidebarImagePrefetchBatchLimit;
- (id)warningControllerLimit;

@end
