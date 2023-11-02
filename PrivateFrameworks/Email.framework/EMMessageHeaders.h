
@interface EMMessageHeaders : NSObject <NSSecureCoding> {
    NSDictionary * _headers;
}

@property (nonatomic, readonly, copy) NSArray *headerKeys;
@property (nonatomic, copy) NSDictionary *headers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)headerKeys;
- (id)headers;
- (id)headersForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaders:(id)arg1;
- (void)setHeaders:(id)arg1;

@end
