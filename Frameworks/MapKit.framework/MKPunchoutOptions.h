
@interface MKPunchoutOptions : NSObject {
    NSString * _appBundleIdentifier;
    long long  _strategy;
    NSURL * _urlToOpen;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) long long strategy;
@property (nonatomic, copy) NSURL *urlToOpen;

+ (id)punchoutOptionsForURLStrings:(id)arg1 withAttribution:(id)arg2;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setStrategy:(long long)arg1;
- (void)setUrlToOpen:(id)arg1;
- (long long)strategy;
- (id)urlToOpen;

@end
