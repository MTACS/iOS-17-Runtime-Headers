
@interface MIRelocatedBundleContainer : MIBundleContainer

- (unsigned long long)diskUsage;
- (bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 withError:(id*)arg4;
- (bool)makeContainerLiveWithError:(id*)arg1;
- (bool)purgeContentWithError:(id*)arg1;
- (bool)regenerateDirectoryUUIDWithError:(id*)arg1;
- (bool)shouldHaveCorrespondingDataContainer;

@end
