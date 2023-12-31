
@interface SARestartRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastResponseId;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *requestId;
@property (readonly) Class superclass;

+ (id)restartRequest;
+ (id)restartRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)lastResponseId;
- (id)requestId;
- (bool)requiresResponse;
- (void)setLastResponseId:(id)arg1;
- (void)setRequestId:(id)arg1;

@end
