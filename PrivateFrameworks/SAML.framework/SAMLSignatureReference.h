
@interface SAMLSignatureReference : SAMLBaseElement

@property (nonatomic, readonly) NSString *digestMethod;
@property (nonatomic, readonly) NSData *digestValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *transforms;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uri;

+ (id)createElement:(id*)arg1;

- (id)digestMethod;
- (id)digestValue;
- (id)identifier;
- (id)transforms;
- (id)type;
- (id)uri;

@end
