
@interface CRKSimulateRequest : CATTaskRequest {
    CRKIDSLocalSimulationConfiguration * _IDSLocalConfiguration;
}

@property (nonatomic, retain) CRKIDSLocalSimulationConfiguration *IDSLocalConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IDSLocalConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIDSLocalConfiguration:(id)arg1;

@end
