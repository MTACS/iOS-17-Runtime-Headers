
@interface URLDecodingResult : NSObject {
    NSURL * _url;
    long long  _urlDecodingStateInternal;
}

@property (nonatomic, retain) NSURL *url;
@property (nonatomic) long long urlDecodingStateInternal;

- (void).cxx_destruct;
- (void)setUrl:(id)arg1;
- (void)setUrlDecodingStateInternal:(long long)arg1;
- (id)url;
- (long long)urlDecodingStateInternal;

@end
