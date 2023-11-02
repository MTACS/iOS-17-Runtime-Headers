
@interface CRKPrimitiveBackedCertificateConduit : NSObject <CRKCertificateConduit> {
    <CRKIDSPrimitives> * _IDSPrimitives;
    <CRKIDSAddressTranslator> * _addressTranslator;
    CATOperationQueue * _operationQueue;
    <CRKTimerPrimitives> * _timerPrimitives;
}

@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, readonly) <CRKIDSAddressTranslator> *addressTranslator;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;
@property (nonatomic, readonly) <CRKTimerPrimitives> *timerPrimitives;

+ (id)fetchOperationTimerIdentifier;

- (void).cxx_destruct;
- (id)IDSPrimitives;
- (id)addressTranslator;
- (id)initWithIDSPrimitives:(id)arg1 addressTranslator:(id)arg2 operationQueue:(id)arg3;
- (id)initWithIDSPrimitives:(id)arg1 addressTranslator:(id)arg2 timerPrimitives:(id)arg3 operationQueue:(id)arg4;
- (id)operationQueue;
- (id)operationToFetchCertificateForDestinationAppleID:(id)arg1 sourceAppleID:(id)arg2 destinationDeviceIdentifier:(id)arg3 controlGroupIdentifier:(id)arg4 sourceRole:(long long)arg5 destinationRole:(long long)arg6 requesterCertificate:(id)arg7 timeout:(double)arg8;
- (id)timerPrimitives;

@end
