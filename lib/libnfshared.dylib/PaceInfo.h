
@interface PaceInfo : SecurityInfo {
    NSNumber * _optionalParameter;
    long long  _protocol;
    long long  _version;
}

@property (retain) NSNumber *optionalParameter;
@property long long protocol;
@property long long version;

- (void).cxx_destruct;
- (id)description;
- (void)setOptionalParameter:(id)arg1;
- (void)setProtocol:(long long)arg1;
- (void)setVersion:(long long)arg1;

@end
