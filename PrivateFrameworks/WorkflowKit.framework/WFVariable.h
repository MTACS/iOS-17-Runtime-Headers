
@interface WFVariable : NSObject <NSCopying, WFVariableSerialization, WFVariableStringContent> {
    NSArray * _aggrandizements;
    NSHashTable * _delegates;
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSArray *aggrandizements;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultName;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFIcon *icon;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *nameIncludingPropertyName;
@property (nonatomic, readonly) NSOrderedSet *possibleAggrandizedContentClasses;
@property (nonatomic, readonly) NSOrderedSet *possibleContentClasses;
@property (nonatomic, readonly) NSString *propertyName;
@property (getter=isRenamed, nonatomic, readonly) bool renamed;
@property (nonatomic, readonly) NSSet *requiredAccessResources;
@property (nonatomic, readonly) bool requiresModernVariableSupport;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAggrandizements;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)UUID;
- (void)addDelegate:(id)arg1;
- (id)aggrandizements;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultName;
- (id)delegates;
- (id)description;
- (id)dictionary;
- (void)getContentWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getContentWithContext:(id)arg1 trackContentAttribution:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getFileRepresentationWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getObjectRepresentationForClass:(Class)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)icon;
- (id)init;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isRenamed;
- (id)name;
- (id)nameIncludingPropertyName;
- (id)possibleAggrandizedContentClasses;
- (id)possibleAggrandizedContentClassesWithContext:(id)arg1;
- (id)possibleContentClasses;
- (id)possibleContentClassesWithContext:(id)arg1;
- (id)propertyName;
- (void)removeDelegate:(id)arg1;
- (id)requiredAccessResources;
- (bool)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serializedRepresentation;
- (void)setDictionary:(id)arg1;
- (bool)supportsAggrandizements;
- (id)type;
- (id)variableBySettingAggrandizements:(id)arg1;
- (id)variableProvider;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;
- (void)variableProvider:(id)arg1 variableWasMoved:(id)arg2;
- (void)variableProviderDidInvalidateOutputDetails:(id)arg1;
- (void)variableUpdated;
- (void)wf_getContentItemsWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)wf_lengthInVariableString;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (bool)shouldDisplayEditorOnInsertionInContext:(unsigned long long)arg1;

@end
