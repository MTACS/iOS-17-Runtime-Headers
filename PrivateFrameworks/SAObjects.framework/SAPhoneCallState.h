
@interface SAPhoneCallState : AceObject <SABackgroundContextObject>

@property (nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool incoming;
@property (readonly) Class superclass;

+ (id)callState;
+ (id)callStateWithDictionary:(id)arg1 context:(id)arg2;

- (bool)active;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)incoming;
- (void)setActive:(bool)arg1;
- (void)setIncoming:(bool)arg1;

@end
