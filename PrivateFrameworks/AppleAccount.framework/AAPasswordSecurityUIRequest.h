
@interface AAPasswordSecurityUIRequest : AAAppleIDSettingsRequest {
    unsigned long long  _spyglassOptionMask;
}

@property (nonatomic) unsigned long long spyglassOptionMask;

- (void)setSpyglassOptionMask:(unsigned long long)arg1;
- (unsigned long long)spyglassOptionMask;
- (id)urlRequest;
- (id)urlString;

@end
