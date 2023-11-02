
@interface SUWebScriptReloadContext : NSObject <NSCopying> {
    NSURL * _URL;
    NSURL * _referrerURL;
    NSString * _referringUserAgent;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSURL *referrerURL;
@property (nonatomic, copy) NSString *referringUserAgent;

- (void).cxx_destruct;
- (id)URL;
- (id)_copyScriptDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)referrerURL;
- (id)referringUserAgent;
- (void)setReferrerURL:(id)arg1;
- (void)setReferringUserAgent:(id)arg1;
- (void)setURL:(id)arg1;

@end
