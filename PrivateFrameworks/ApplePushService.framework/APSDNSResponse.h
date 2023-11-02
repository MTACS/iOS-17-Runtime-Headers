
@interface APSDNSResponse : NSObject <NSSecureCoding> {
    NSString * _hostname;
    NSArray * _ipv4Address;
    NSArray * _ipv6Address;
}

@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) NSArray *ipv4Address;
@property (nonatomic, readonly) NSArray *ipv6Address;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hostname;
- (id)initResponseForHostname:(id)arg1 ipv4Address:(id)arg2 ipv6Address:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)ipv4Address;
- (id)ipv6Address;

@end
