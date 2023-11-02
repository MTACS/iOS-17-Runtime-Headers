
@interface _VNImageAnalyzerMultiDetectorTilingObservationsRecipient : NSObject <VNObservationsRecipient> {
    <VNObservationsRecipient> * _observationsRecipient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithObservationsRecipient:(id)arg1;
- (id)originatingRequestSpecifier;
- (void)receiveObservations:(id)arg1;

@end
