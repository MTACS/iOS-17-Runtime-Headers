
@interface WBSWebExtensionMatchPattern : NSObject <NSCopying, NSSecureCoding> {
    _WKWebExtensionMatchPattern * _webKitMatchPattern;
}

@property (nonatomic, readonly) NSArray *expandedMatchPatternStrings;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) bool matchesAllHosts;
@property (nonatomic, readonly) bool matchesAllURLs;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) _WKWebExtensionMatchPattern *webKitMatchPattern;

+ (id)allHostsAndSchemesMatchPattern;
+ (id)allHostsAndSchemesMatchPatternSet;
+ (bool)hasPatternMatchingIndividualHost:(id)arg1;
+ (void)initialize;
+ (id)matchPatternForDomain:(id)arg1;
+ (id)matchPatternWithString:(id)arg1;
+ (bool)patternSetContainsAllHostsPattern:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithScheme:(id)arg1;
- (id)_initWithWebKitMatchPattern:(id)arg1;
- (id)_webKitMatchPattern;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expandedMatchPatternStrings;
- (unsigned long long)hash;
- (id)host;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 exception:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)matchesAllHosts;
- (bool)matchesAllURLs;
- (bool)matchesPattern:(id)arg1;
- (bool)matchesPattern:(id)arg1 options:(unsigned long long)arg2;
- (bool)matchesURL:(id)arg1;
- (bool)matchesURL:(id)arg1 options:(unsigned long long)arg2;
- (id)path;
- (id)scheme;
- (id)webKitMatchPattern;

@end
