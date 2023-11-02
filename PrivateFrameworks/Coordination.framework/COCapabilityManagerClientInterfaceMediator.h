
@interface COCapabilityManagerClientInterfaceMediator : NSObject <COCapabilityManagerClientInterface> {
    COCapabilityManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COCapabilityManager *manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)availabilityChanged:(bool)arg1 ofCapability:(id)arg2 inCluster:(id)arg3;
- (id)initWithCapabilityManager:(id)arg1;
- (id)manager;

@end
