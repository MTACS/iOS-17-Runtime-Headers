
@interface SAMLStatus : SAMLBaseElement

@property (nonatomic, readonly) SAMLStatusCode *statusCode;
@property (nonatomic, readonly) NSString *statusDetail;
@property (nonatomic, readonly) NSString *statusMessage;

+ (id)createElement:(id*)arg1;

- (id)status;
- (id)statusCode;
- (id)statusDetail;
- (id)statusMessage;

@end
