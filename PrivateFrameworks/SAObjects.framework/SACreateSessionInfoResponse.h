
@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSData *sessionInfo;
@property (nonatomic, copy) NSNumber *validityDuration;

+ (id)createSessionInfoResponse;
+ (id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (void)setValidityDuration:(id)arg1;
- (id)validityDuration;

@end
