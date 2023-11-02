
@interface SAMLKeyRetrievalMethod : SAMLBaseElement

@property (nonatomic, readonly) NSArray *transforms;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uri;

+ (id)createElement:(id*)arg1;

- (id)transforms;
- (id)type;
- (id)uri;

@end
