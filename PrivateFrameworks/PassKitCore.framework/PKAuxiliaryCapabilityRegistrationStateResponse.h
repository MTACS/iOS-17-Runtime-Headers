
@interface PKAuxiliaryCapabilityRegistrationStateResponse : PKAuxiliaryCapabilityWebServiceResponse {
    NSArray * _unregisteredRequirements;
}

@property (nonatomic, retain) NSArray *unregisteredRequirements;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (void)setUnregisteredRequirements:(id)arg1;
- (id)unregisteredRequirements;

@end
