
@interface _HMNetworkPath : NSObject <_HMNetworkPath> {
    NSObject<OS_nw_path> * _nwPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_nw_path> *nwPath;
@property (nonatomic, readonly) int status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithNwPath:(id)arg1;
- (id)nwPath;
- (void)setNwPath:(id)arg1;
- (int)status;

@end
