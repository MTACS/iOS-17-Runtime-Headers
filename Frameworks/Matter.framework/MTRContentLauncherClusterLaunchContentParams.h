
@interface MTRContentLauncherClusterLaunchContentParams : NSObject <NSCopying> {
    NSNumber * _autoPlay;
    NSString * _data;
    MTRContentLauncherClusterContentSearchStruct * _search;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *autoPlay;
@property (nonatomic, copy) NSString *data;
@property (nonatomic, copy) MTRContentLauncherClusterContentSearchStruct *search;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)autoPlay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)init;
- (id)search;
- (id)serverSideProcessingTimeout;
- (void)setAutoPlay:(id)arg1;
- (void)setData:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
