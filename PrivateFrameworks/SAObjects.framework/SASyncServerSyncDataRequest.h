
@interface SASyncServerSyncDataRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *clientGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *syncToken;
@property (nonatomic, copy) NSString *syncType;

- (id)assistantId;
- (id)clientGeneration;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAssistantId:(id)arg1;
- (void)setClientGeneration:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setSyncType:(id)arg1;
- (id)syncToken;
- (id)syncType;

@end
