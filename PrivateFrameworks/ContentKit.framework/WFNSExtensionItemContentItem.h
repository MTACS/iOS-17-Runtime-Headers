
@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass> {
    NSArray * _extensionSubItems;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtensionItem *extensionItem;
@property (nonatomic, retain) NSArray *extensionSubItems;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithObject:(id)arg1 sourceAppBundleIdentifier:(id)arg2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (void).cxx_destruct;
- (bool)cachesSupportedTypes;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)extensionItem;
- (id)extensionItemName;
- (id)extensionSubItems;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)itemProviderItems;
- (id)itemProviders;
- (bool)itemProvidersSupportType:(id)arg1;
- (id)name;
- (void)preloadImportantItemsWithCompletionHandler:(id /* block */)arg1;
- (void)setExtensionSubItems:(id)arg1;

@end
