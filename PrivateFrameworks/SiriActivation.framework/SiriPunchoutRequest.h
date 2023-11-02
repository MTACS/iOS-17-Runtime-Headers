
@interface SiriPunchoutRequest : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    long long  _punchoutStyle;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) long long punchoutStyle;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (long long)punchoutStyle;
- (void)setBundleIdentifier:(id)arg1;
- (void)setPunchoutStyle:(long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
