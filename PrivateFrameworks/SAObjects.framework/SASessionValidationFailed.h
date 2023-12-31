
@interface SASessionValidationFailed : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *errorCode;

+ (id)sessionValidationFailed;
+ (id)sessionValidationFailedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)errorCode;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setErrorCode:(id)arg1;

@end
