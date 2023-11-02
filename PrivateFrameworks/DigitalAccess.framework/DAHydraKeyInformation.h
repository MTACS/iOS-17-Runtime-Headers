
@interface DAHydraKeyInformation : NSObject <NSSecureCoding> {
    NSData * _appletIdentifier;
    NSArray * _certificateChain;
}

@property (readonly) NSData *appletIdentifier;
@property (readonly) NSArray *certificateChain;

+ (bool)supportsSecureCoding;
+ (id)withEndpoint:(id)arg1;

- (void).cxx_destruct;
- (id)appletIdentifier;
- (id)certificateChain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
