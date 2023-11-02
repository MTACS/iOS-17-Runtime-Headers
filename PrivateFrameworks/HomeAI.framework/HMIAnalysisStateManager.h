
@interface HMIAnalysisStateManager : HMFObject <HMFLogging> {
    <HMIAnalysisStateManagerDelegate> * _delegate;
    NSUUID * _homeUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMIAnalysisStateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleRemoteStateUpdate:(id)arg1;
- (void)handleRemoteStateUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1;
- (void)publishLocalState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)stateUpdateFromFaceEvents:(id)arg1;

@end
