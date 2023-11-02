
@interface SAMLRequestedAuthNContext : SAMLBaseElement

@property (nonatomic, readonly) NSString *classRef;
@property (nonatomic, readonly) NSString *comparison;
@property (nonatomic, readonly) NSString *declRef;

+ (id)createElement:(id*)arg1;

- (id)classRef;
- (id)comparison;
- (id)declRef;

@end
