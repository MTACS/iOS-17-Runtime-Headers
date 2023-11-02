
@interface NFAssertion : NSObject <NSSecureCoding> {
    NSDate * _assertionTime;
    unsigned long long  _assertionType;
    int  _pid;
}

@property (readonly) NSDate *assertionTime;
@property (readonly) unsigned long long assertionType;
@property (readonly) int pid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assertionTime;
- (unsigned long long)assertionType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)sessionID;

@end
