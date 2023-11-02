
@interface VNAlignFaceRectangleRequest : VNRequest {
    NSArray * _inputFaceObservations;
}

@property (nonatomic, readonly, copy) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (long long)dependencyProcessingOrdinality;
- (id)initWithFaceObservations:(id)arg1;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)inputFaceObservations;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDuplicateInstance;
- (bool)resultsAreAssignedWithOriginatingRequestSpecifier;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
