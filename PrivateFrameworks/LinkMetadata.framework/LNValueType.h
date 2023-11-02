
@interface LNValueType : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly, copy) NSString *cat_dialogType;
@property (nonatomic, readonly) LNEntityValueType *wf_entityValueType;
@property (nonatomic, readonly) LNLinkEnumerationValueType *wf_enumValueType;
@property (nonatomic, readonly) Class wf_objectClass;
@property (nonatomic, readonly) LNValueType *wf_objectValueType;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)objectClassesForCoding;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesOfValueType:(id)arg1 value:(id)arg2 block:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (Class)objectClass;
- (bool)objectIsMemberOfType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)cat_keyPath;
- (id)cat_value:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_contentCollectionFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;
- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;
- (id)wf_contentItemFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;
- (id)wf_entityValueType;
- (id)wf_enumValueType;
- (Class)wf_objectClass;
- (id)wf_objectValueType;
- (id)wf_parameterDefinitionWithParameterMetadata:(id)arg1;
- (id)wf_parameterDefinitionWithParameterMetadata:(id)arg1 dynamicOptionsSupport:(bool)arg2;
- (id)wf_titleWithCustomIntentSerializedRepresentation:(id)arg1;
- (id)wf_valueTypeOfClass:(Class)arg1;

@end
