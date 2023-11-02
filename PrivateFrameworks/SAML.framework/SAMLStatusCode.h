
@interface SAMLStatusCode : SAMLBaseElement

@property (nonatomic, readonly) SAMLStatusCode *statusCode;
@property (nonatomic, readonly) NSString *value;

+ (id)createElement:(id*)arg1;

- (id)statusCode;
- (id)value;

@end
