
@interface UCAppClipCodeURLEncodingResult : NSObject {
    NSData * _appClipCodeBytes;
    bool  _hasPathOrQueryEncoding;
    long long  _hostEncodedBitCount;
    long long  _hostEncodingFormat;
    long long  _nonTemplatePathAndQueryEncodeType;
    NSString * _rawEncodedBits;
    long long  _subdomainType;
    long long  _templateType;
    NSURL * _url;
}

@property (nonatomic, readonly) NSData *appClipCodeBytes;
@property (nonatomic) bool hasPathOrQueryEncoding;
@property (nonatomic) long long hostEncodedBitCount;
@property (nonatomic) long long hostEncodingFormat;
@property (nonatomic) long long nonTemplatePathAndQueryEncodeType;
@property (nonatomic, readonly, copy) NSString *rawEncodedBits;
@property (nonatomic) long long subdomainType;
@property (nonatomic) long long templateType;
@property (nonatomic, retain) NSURL *url;

+ (id)resultWithRawEncodedBits:(id)arg1 appClipCodeBytes:(id)arg2;

- (void).cxx_destruct;
- (id)appClipCodeBytes;
- (bool)hasPathOrQueryEncoding;
- (long long)hostEncodedBitCount;
- (long long)hostEncodingFormat;
- (id)initWithRawEncodedBits:(id)arg1 appClipCodeBytes:(id)arg2;
- (long long)nonTemplatePathAndQueryEncodeType;
- (id)rawEncodedBits;
- (void)setHasPathOrQueryEncoding:(bool)arg1;
- (void)setHostEncodedBitCount:(long long)arg1;
- (void)setHostEncodingFormat:(long long)arg1;
- (void)setNonTemplatePathAndQueryEncodeType:(long long)arg1;
- (void)setSubdomainType:(long long)arg1;
- (void)setTemplateType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)subdomainType;
- (long long)templateType;
- (id)url;

@end
