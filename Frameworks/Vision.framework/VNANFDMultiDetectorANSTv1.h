
@interface VNANFDMultiDetectorANSTv1 : VNANFDMultiDetectorANODv4

+ (Class)detectorClass;
+ (bool)shouldAlignFacesForRequestWithSpecifier:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (bool)supportsExecution;

@end
