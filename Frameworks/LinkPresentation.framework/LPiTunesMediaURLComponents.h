
@interface LPiTunesMediaURLComponents : NSObject {
    NSString * _identifier;
    NSString * _storefrontCountryCode;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *storefrontCountryCode;

+ (id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2;
+ (id)storefrontCountryCodeFromPathComponent:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithURL:(id)arg1;
- (id)storefrontCountryCode;

@end
