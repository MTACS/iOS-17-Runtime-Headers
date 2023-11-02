
@interface HMDSoftwareUpdateEventListener : HMFObject <HMEEventConsumer, HMFLogging> {
    HMDSoftwareUpdateEventListenerContext * _context;
}

@property (readonly) HMDSoftwareUpdateEventListenerContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isSoftwareUpdateAvailable;
@property (readonly) bool isSoftwareUpdateDownloadedAndReadyForInstallation;
@property (readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)context;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)initWithContext:(id)arg1;
- (bool)isSoftwareUpdateAvailable;
- (bool)isSoftwareUpdateDownloadedAndReadyForInstallation;
- (id)logIdentifier;
- (void)registerForEvents;
- (id)softwareUpdateDescriptorForLastEvent;

@end
