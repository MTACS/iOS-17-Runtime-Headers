
@interface NSHTTPURLRequestParameters : NSObject <NSCoding> {
    bool  _pad1;
    bool  _pad2;
    bool  _pad3;
    NSData * data;
    NSArray * extraCookies;
    NSMutableDictionary * fields;
    NSString * method;
    unsigned long long  pageNotFoundCacheLifetime;
    bool  shouldHandleCookies;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
