
@interface HMBShareOperation : HMBFutureOperation <HMFLogging> {
    HMBCloudZone * _cloudZone;
}

@property (readonly) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cloudZone;
- (id)initWithCloudZone:(id)arg1 block:(id /* block */)arg2;
- (void)main;

@end
