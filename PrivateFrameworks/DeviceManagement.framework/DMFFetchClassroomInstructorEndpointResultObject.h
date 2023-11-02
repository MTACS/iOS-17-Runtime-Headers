
@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject {
    NSXPCListenerEndpoint * _endpoint;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;

@end
