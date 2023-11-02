
@interface HMDMatterSoftwareUpdateProviderDelegateDataSource : HMFObject <HMDMatterSoftwareUpdateProviderDelegateDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMatterAccessorySoftwareUpdateEnabled, readonly) bool matterAccessorySoftwareUpdateEnabled;
@property (readonly) Class superclass;

- (bool)isMatterAccessorySoftwareUpdateEnabled;

@end
