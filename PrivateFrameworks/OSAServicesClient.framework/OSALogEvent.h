
@interface OSALogEvent : NSObject <NSSecureCoding> {
    NSDictionary * _details;
    OSALogIdentity * _identity;
}

@property (nonatomic, readonly) NSDictionary *details;
@property (nonatomic, readonly) OSALogIdentity *identity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 details:(id)arg2;

@end
