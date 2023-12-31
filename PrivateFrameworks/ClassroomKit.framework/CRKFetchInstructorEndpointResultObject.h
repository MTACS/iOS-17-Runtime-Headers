
@interface CRKFetchInstructorEndpointResultObject : CATTaskResultObject {
    NSXPCListenerEndpoint * _endpoint;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (void)setEndpoint:(id)arg1;

@end
