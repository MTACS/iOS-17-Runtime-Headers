
@interface VNGeneratePersonInstanceMaskRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;
+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (struct __CVBuffer { }*)_createInstanceMaskFromMaskArray:(id)arg1 error:(id*)arg2;
- (id)_newConfiguredDependentRequestForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (id)supportedImageSizeSet;
- (bool)warmUpSession:(id)arg1 error:(id*)arg2;

@end
