
@interface __HMFSoftwareVersionDataSource : HMFObject <HMFSystemInfoSoftwareVersionDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;

- (id)softwareVersion;

@end
