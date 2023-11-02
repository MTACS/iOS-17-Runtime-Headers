
@interface VNImageRegistrationRequest : VNTargetedImageRequest {
    VNImageBuffer * _cachedFloatingImageBuffer;
    VNImageRegistrationSignature * _cachedFloatingImageSignature;
}

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)cachedFloatingImageBufferReturningError:(id*)arg1;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id*)arg1;
- (bool)getReferenceImageBuffer:(id*)arg1 registrationSignature:(id*)arg2 forRequestPerformingContext:(id)arg3 error:(id*)arg4;
- (bool)wantsSequencedRequestObservationsRecording;

@end
