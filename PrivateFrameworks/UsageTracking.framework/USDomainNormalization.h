
@interface USDomainNormalization : NSObject {
    struct UIDNA { } * _idna;
}

- (void)dealloc;
- (id)normalizeDomainName:(id)arg1;
- (id)normalizeDomainNames:(id)arg1;
- (id)normalizeURL:(id)arg1;

@end
