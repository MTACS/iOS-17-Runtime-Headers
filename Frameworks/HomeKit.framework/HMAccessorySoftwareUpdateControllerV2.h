
@interface HMAccessorySoftwareUpdateControllerV2 : NSObject <HMEEventConsumer, HMFLogging> {
    _HMContext * _context;
    <HMAccessorySoftwareUpdateControllerV2Delegate> * _delegate;
    HMSoftwareUpdateDocumentationManager * _documentationManager;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _softwareUpdateByAccessory;
    <HMESubscriptionProviding> * _subscriptionProvider;
}

@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMAccessorySoftwareUpdateControllerV2Delegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMSoftwareUpdateDocumentationManager *documentationManager;
@property (readonly) unsigned long long hash;
@property (readonly) HMHome *home;
@property (readonly) NSMutableDictionary *softwareUpdateByAccessory;
@property (readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;

+ (id)accessoryUUIDsForAccessoryIdentifiers:(id)arg1 home:(id)arg2;
+ (id)logCategory;
+ (id)softwareUpdateFromSoftwareUpdateV2:(id)arg1;
+ (id)topicFiltersForAccessoryIdentifiers:(id)arg1 home:(id)arg2;

- (void).cxx_destruct;
- (void)applySoftwareUpdate:(id)arg1 accessory:(id)arg2 completion:(id /* block */)arg3;
- (id)context;
- (id)delegate;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)documentationManager;
- (void)fetchDocumentationFromMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDidReceiveDescriptorEvent:(id)arg1 forAccessory:(id)arg2;
- (void)handleDidReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)handleDidReceiveProgressEvent:(id)arg1 forAccessory:(id)arg2;
- (id)home;
- (id)initWithContext:(id)arg1 home:(id)arg2 subscriptionProvider:(id)arg3 documentationManager:(id)arg4;
- (id)messageDestinationForAccessory:(id)arg1;
- (void)scanForSoftwareUpdateOnAccessories:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)scanForSoftwareUpdateRepeatedlyOnAccessory:(id)arg1 andInstallUpdate:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (id)softwareUpdateByAccessory;
- (id)softwareUpdateForAccessory:(id)arg1 withDescriptor:(id)arg2;
- (id)softwareUpdateProgressForAccessory:(id)arg1 withProgress:(id)arg2;
- (void)subscribe:(id)arg1 completion:(id /* block */)arg2;
- (id)subscriptionProvider;
- (void)unsubscribe:(id)arg1;

@end
