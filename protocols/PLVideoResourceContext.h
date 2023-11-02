
@protocol PLVideoResourceContext <NSObject>

@required

- (<PLVideoResource> *)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (void)repairResource:(id <PLVideoResource>)arg1;
- (double)sizeThresholdForHighQuality;
- (bool)validateResource:(id <PLVideoResource>)arg1;
- (NSArray *)videoResourcesMatchingVersions:(NSArray *)arg1;

@end
