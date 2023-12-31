
@interface SAAIStartSession : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *acousticIdSessionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)startSession;
+ (id)startSessionWithDictionary:(id)arg1 context:(id)arg2;

- (id)acousticIdSessionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAcousticIdSessionId:(id)arg1;

@end
