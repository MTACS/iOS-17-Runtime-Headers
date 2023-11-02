
@interface SKPseudonyms : NSObject {
    IDSService * _service;
}

@property (nonatomic, retain) IDSService *service;

- (void).cxx_destruct;
- (id)initWithIDSService:(id)arg1;
- (id)propertiesWithUpdatedServices:(id)arg1;
- (void)provisionPseudonymForURI:(id)arg1 withProperties:(id)arg2 completion:(id /* block */)arg3;
- (void)provisionPseudonymForURI:(id)arg1 withProperties:(id)arg2 requestProperties:(id)arg3 completion:(id /* block */)arg4;
- (void)provisionPseudonymWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)provisionPseudonymWithProperties:(id)arg1 requestProperties:(id)arg2 completion:(id /* block */)arg3;
- (id)pseudonymForPseudonymURI:(id)arg1;
- (id)pseudonymPropertiesWithFeatureID:(id)arg1 expiryDurationInSeconds:(double)arg2;
- (id)pseudonymPropertiesWithFeatureID:(id)arg1 scopeID:(id)arg2 expiryDurationInSeconds:(double)arg3;
- (id)pseudonymsForMaskedURI:(id)arg1;
- (id)pseudonymsForMaskedURI:(id)arg1 matchingProperties:(id)arg2;
- (void)renewPseudonym:(id)arg1 forUpdatedDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)revokePseudonym:(id)arg1 completion:(id /* block */)arg2;
- (id)service;
- (void)setService:(id)arg1;

@end
