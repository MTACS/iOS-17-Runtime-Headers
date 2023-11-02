
@interface MTRMediaInputClusterRenameInputParams : NSObject <NSCopying> {
    NSNumber * _index;
    NSString * _name;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *index;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)index;
- (id)init;
- (id)name;
- (id)serverSideProcessingTimeout;
- (void)setIndex:(id)arg1;
- (void)setName:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
