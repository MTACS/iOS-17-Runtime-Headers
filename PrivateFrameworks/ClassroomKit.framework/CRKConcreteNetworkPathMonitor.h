
@interface CRKConcreteNetworkPathMonitor : NSObject <CRKNetworkPathMonitor> {
    CRKConcreteNetworkPath * _path;
    NSObject<OS_nw_path_monitor> * _underlyingPathMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRKConcreteNetworkPath *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_nw_path_monitor> *underlyingPathMonitor;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithUnderlyingPathMonitor:(id)arg1;
- (id)path;
- (void)resume;
- (void)setPath:(id)arg1;
- (id)underlyingPathMonitor;
- (void)updateWithPath:(id)arg1;

@end
