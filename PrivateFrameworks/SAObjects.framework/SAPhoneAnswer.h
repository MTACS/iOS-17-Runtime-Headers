
@interface SAPhoneAnswer : SABaseClientBoundCommand

@property (nonatomic) bool videoAllowed;

+ (id)answer;
+ (id)answerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVideoAllowed:(bool)arg1;
- (bool)videoAllowed;

@end
