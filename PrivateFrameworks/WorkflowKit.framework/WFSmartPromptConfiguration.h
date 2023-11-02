
@interface WFSmartPromptConfiguration : WFWorkflowAuthorizationConfiguration {
    NSString * _actionUUID;
    NSData * _archivedSourceContentCollection;
    WFContentCollection * _cachedSourceContentCollection;
    WFDeletionAuthorizationState * _deletionAuthorizationState;
    bool  _isSpecialRequest;
    NSString * _localizedPrompt;
    NSString * _localizedSubtitle;
    NSString * _requestSource;
    NSString * _requestType;
    NSArray * _smartPromptStates;
    WFWorkflowReference * _workflowReference;
}

@property (nonatomic, readonly, copy) NSString *actionUUID;
@property (nonatomic, readonly, copy) NSData *archivedSourceContentCollection;
@property (nonatomic, readonly) WFContentCollection *cachedSourceContentCollection;
@property (nonatomic, readonly, copy) WFDeletionAuthorizationState *deletionAuthorizationState;
@property (nonatomic, readonly) bool isSpecialRequest;
@property (nonatomic, readonly, copy) NSString *localizedPrompt;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly, copy) NSString *requestSource;
@property (nonatomic, readonly, copy) NSString *requestType;
@property (nonatomic, readonly, copy) NSArray *smartPromptStates;
@property (nonatomic, readonly) WFWorkflowReference *workflowReference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionUUID;
- (id)archivedSourceContentCollection;
- (id)authorizationDialogRequestWithAttribution:(id)arg1;
- (id)cachedSourceContentCollection;
- (bool)containsPrivatePreviews;
- (id)deletionAuthorizationState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeletionAuthorizationState:(id)arg1 contentCollection:(id)arg2 action:(id)arg3 reference:(id)arg4 source:(id)arg5;
- (id)initWithSmartPromptStates:(id)arg1 attributionSet:(id)arg2 previousAttributions:(id)arg3 contentItemCache:(id)arg4 action:(id)arg5 contentDestination:(id)arg6 reference:(id)arg7 source:(id)arg8 isWebpageCoercion:(bool)arg9;
- (bool)isSpecialRequest;
- (id)localizedPrompt;
- (id)localizedSubtitle;
- (id)requestSource;
- (id)requestType;
- (id)smartPromptStates;
- (id)workflowReference;

@end
