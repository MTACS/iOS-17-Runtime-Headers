
@interface SARDResultCandidateSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SARDNativeFlowContextUpdate *nativeFlowContextUpdate;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *selectedResultCandidateId;
@property (nonatomic) bool serverFallback;
@property (readonly) Class superclass;

+ (id)resultCandidateSelected;
+ (id)resultCandidateSelectedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nativeFlowContextUpdate;
- (bool)requiresResponse;
- (id)selectedResultCandidateId;
- (bool)serverFallback;
- (void)setNativeFlowContextUpdate:(id)arg1;
- (void)setSelectedResultCandidateId:(id)arg1;
- (void)setServerFallback:(bool)arg1;

@end
