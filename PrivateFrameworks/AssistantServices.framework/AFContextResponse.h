
@interface AFContextResponse : AFSiriResponse {
    STSiriContext * _context;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_context;
- (id)_initWithRequest:(id)arg1 context:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
