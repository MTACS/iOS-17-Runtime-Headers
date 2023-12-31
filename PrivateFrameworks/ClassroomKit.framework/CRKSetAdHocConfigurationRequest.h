
@interface CRKSetAdHocConfigurationRequest : CATTaskRequest {
    NSDictionary * _configuration;
    bool  _merge;
}

@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic) bool merge;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)merge;
- (void)setConfiguration:(id)arg1;
- (void)setMerge:(bool)arg1;

@end
