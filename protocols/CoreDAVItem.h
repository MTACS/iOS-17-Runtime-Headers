
@protocol CoreDAVItem <NSObject>

@required

+ (NSDictionary *)copyParseRules;
+ (NSCache *)parseRuleCache;

- (NSDictionary *)copyParseRules;
- (void)parserFoundAttributes:(NSSet *)arg1;
- (void)parserFoundPayload:(NSData *)arg1;
- (void)parserFoundUnrecognizedElement:(CoreDAVItem *)arg1;
- (void)parserSuggestsBaseURL:(NSURL *)arg1;
- (bool)validate;
- (void)write:(CoreDAVXMLData *)arg1;

@end
