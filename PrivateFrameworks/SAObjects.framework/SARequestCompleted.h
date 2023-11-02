
@interface SARequestCompleted : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *turnId;

+ (id)requestCompleted;
+ (id)requestCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTurnId:(id)arg1;
- (id)turnId;

@end
