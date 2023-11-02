
@interface WFURLContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)URLCoercions;
+ (id)attributionSetContentOfURL:(id)arg1;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)filterRepresentationsForAllowedContent:(id)arg1;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 cachingIdentifier:(id)arg5;
+ (id)mutableURLCoercions;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (void)rediscoverURLCoercionClassesIfNeeded;
+ (void)registerURLCoercion:(Class)arg1;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (id)URL;
- (id)additionalRepresentationsForSerialization;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)description;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentationForPrintHandler:(id /* block */)arg1 coercionOptions:(id)arg2;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getContentsOfURLWithHandler:(id /* block */)arg1;
- (void)getContentsWithRequest:(id)arg1 cacheResult:(bool)arg2 expectedByteCountHandler:(id /* block */)arg3 writtenByteCountHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)getContentsWithRequest:(id)arg1 expectedByteCountHandler:(id /* block */)arg2 writtenByteCountHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)getHeadersWithCompletionHandler:(id /* block */)arg1;
- (void)getPDFWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPreferredFileExtension:(id /* block */)arg1;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (void)getTitleWithPermissionRequestor:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)includesFileRepresentationInSerializedItem;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;
- (id)outputTypes;
- (id)webResource;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)allURLCoercionsInWorkflowKit;

@end
