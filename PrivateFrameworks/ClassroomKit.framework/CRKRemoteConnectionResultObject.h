
@interface CRKRemoteConnectionResultObject : CATTaskResultObject {
    long long  _response;
}

@property (nonatomic) long long response;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)response;
- (void)setResponse:(long long)arg1;

@end
