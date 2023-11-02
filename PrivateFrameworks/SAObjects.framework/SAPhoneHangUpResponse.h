
@interface SAPhoneHangUpResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) bool activeCallRemaining;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *phoneHangUpCallType;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)hangUpResponse;
+ (id)hangUpResponseWithDictionary:(id)arg1 context:(id)arg2;

- (bool)activeCallRemaining;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phoneHangUpCallType;
- (bool)requiresResponse;
- (void)setActiveCallRemaining:(bool)arg1;
- (void)setPhoneHangUpCallType:(id)arg1;

@end
