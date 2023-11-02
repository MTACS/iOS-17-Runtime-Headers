
@interface MEMessageSigner : NSObject <NSSecureCoding> {
    NSData * _context;
    NSArray * _emailAddresses;
    NSString * _label;
}

@property (nonatomic, readonly) NSData *context;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 signatureLabel:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;

@end
