
@interface TRHandshakeOperation : TROperation {
    long long  _protocolVersion;
}

@property (nonatomic) long long protocolVersion;

- (void)_handleResponse:(id)arg1;
- (void)execute;
- (long long)protocolVersion;
- (void)setProtocolVersion:(long long)arg1;

@end
