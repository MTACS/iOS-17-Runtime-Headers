
@interface POTokenConfigJWTBody : _POJWTBodyBase

@property (readonly) NSString *loginUserName;
@property (readonly) NSString *userName;

- (id)loginUserName;
- (id)mutableCopy;
- (id)userName;

@end
