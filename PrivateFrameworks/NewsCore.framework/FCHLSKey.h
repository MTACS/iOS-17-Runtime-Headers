
@interface FCHLSKey : NSObject {
    NSString * _iv;
    NSString * _keyFormat;
    NSString * _keyFormatVersions;
    long long  _method;
    NSURL * _url;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
