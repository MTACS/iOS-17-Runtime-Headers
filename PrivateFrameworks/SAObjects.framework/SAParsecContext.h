
@interface SAParsecContext : SADomainObject

@property (nonatomic, copy) NSData *httpBody;
@property (nonatomic, copy) NSDictionary *httpHeaders;
@property (nonatomic, copy) NSString *httpMethod;
@property (nonatomic, copy) NSString *httpUrl;

+ (id)parsecContext;
+ (id)parsecContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)httpBody;
- (id)httpHeaders;
- (id)httpMethod;
- (id)httpUrl;
- (void)setHttpBody:(id)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setHttpMethod:(id)arg1;
- (void)setHttpUrl:(id)arg1;

@end
