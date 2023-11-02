
@interface WFWorkflowParameterStateDescriptor : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSString * _cachedDisplayName;
    bool  _isSelf;
    NSString * _workflowIdentifier;
    NSString * _workflowName;
}

@property (nonatomic, readonly) NSString *cachedDisplayName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSelf;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *workflowIdentifier;
@property (nonatomic, readonly, copy) NSString *workflowName;

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedDisplayName;
- (id)displayNameWithDatabase:(id)arg1 containingWorkflow:(id)arg2;
- (id)initWithWorkflowName:(id)arg1 workflowIdentifier:(id)arg2 isSelf:(bool)arg3;
- (id)initWithWorkflowReference:(id)arg1 isSelf:(bool)arg2;
- (bool)isSelf;
- (id)matchingWorkflowInDatabase:(id)arg1 containingWorkflow:(id)arg2;
- (id)workflowIdentifier;
- (id)workflowName;

@end
