
@interface SPRKeyAttestationInfo : NSObject <SPRDERRepresentable> {
    SPRKeyAttestationRequest * _request;
    NSData * _signature;
}

@property (readonly, copy) NSData *derRepresentation;
@property (nonatomic, readonly) SPRKeyAttestationRequest *request;
@property (nonatomic, readonly, copy) NSData *signature;

- (void).cxx_destruct;
- (id)derRepresentation;
- (id)initWithDERRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithRequest:(id)arg1 signature:(id)arg2;
- (id)request;
- (id)signature;

@end
