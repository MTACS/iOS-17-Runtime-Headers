
@interface MTRApplicationLauncherClusterLaunchAppParams : NSObject <NSCopying> {
    MTRApplicationLauncherClusterApplicationStruct * _application;
    NSData * _data;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) MTRApplicationLauncherClusterApplicationStruct *application;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)application;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setApplication:(id)arg1;
- (void)setData:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
