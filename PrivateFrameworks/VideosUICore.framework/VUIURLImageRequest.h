
@interface VUIURLImageRequest : NSObject {
    <VUIImageDecrypter> * _decrypter;
    NSDictionary * _headers;
    NSString * _identifier;
    NSURL * _url;
}

@property (nonatomic, retain) <VUIImageDecrypter> *decrypter;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)decrypter;
- (id)headers;
- (id)identifier;
- (id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3;
- (id)initWithURL:(id)arg1 headers:(id)arg2 identifier:(id)arg3 decrypter:(id)arg4;
- (void)setDecrypter:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
