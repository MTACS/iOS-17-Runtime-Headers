
@interface ChipAuthenticationInfo : SecurityInfo {
    NSNumber * _optionalKeyId;
    long long  _protocol;
    long long  _version;
}

@property (retain) NSNumber *optionalKeyId;
@property long long protocol;
@property long long version;

- (void).cxx_destruct;
- (id)description;
- (void)setOptionalKeyId:(id)arg1;
- (void)setProtocol:(long long)arg1;
- (void)setVersion:(long long)arg1;

@end
