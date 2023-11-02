
@interface BLHLSKey : NSObject {
    NSString * _iv;
    NSString * _keyFormat;
    NSString * _keyFormatVersions;
    long long  _method;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *iv;
@property (nonatomic, readonly) NSString *keyFormat;
@property (nonatomic, readonly) NSString *keyFormatVersions;
@property (nonatomic, readonly) long long method;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHLSKey:(id)arg1;
- (bool)isFormatSupported;
- (id)iv;
- (id)keyFormat;
- (id)keyFormatVersions;
- (long long)method;
- (void)setPropertiesFromAttributeList:(id)arg1;
- (id)url;

@end
