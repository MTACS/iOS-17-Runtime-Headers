
@interface FMDEmergencyCallInfoPublisherConfiguration : NSObject <NSSecureCoding> {
    NSString * _serverHost;
}

@property (nonatomic, copy) NSString *serverHost;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serverHost;
- (void)setServerHost:(id)arg1;

@end
