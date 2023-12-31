
@interface WCMessageResponse : WCMessage <NSSecureCoding> {
    NSError * _error;
}

@property (retain) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setError:(id)arg1;

@end
