
@interface CDMWarmupRequestCommand : CDMServiceGraphCommand {
    CDMDynamicConfig * _dynamicConfig;
}

@property (nonatomic, readonly) CDMDynamicConfig *dynamicConfig;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dynamicConfig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDynamicConfig:(id)arg1;

@end
