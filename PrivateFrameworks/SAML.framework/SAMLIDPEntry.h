
@interface SAMLIDPEntry : SAMLBaseElement

@property (nonatomic, readonly) NSString *loc;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *providerId;

+ (id)createElement:(id*)arg1;

- (id)loc;
- (id)name;
- (id)providerId;

@end
