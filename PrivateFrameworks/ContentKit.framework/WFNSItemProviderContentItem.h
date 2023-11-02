
@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass> {
    NSString * _contentName;
    WFFileType * _fileURLType;
    bool  _useNewLoadingAPI;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (nonatomic, copy) NSString *contentName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFFileType *fileURLType;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;
@property (nonatomic) bool useNewLoadingAPI;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemProviderTypeIdentifierOverrides;
+ (id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;

- (void).cxx_destruct;
- (bool)cachesSupportedTypes;
- (id)contentName;
- (id)fileURLType;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateFileRepresentationWithNewAPI:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateObjectRepresentationWithNewAPI:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)itemProvider;
- (id)name;
- (id)outputTypes;
- (void)preloadImportantItemsWithCompletionHandler:(id /* block */)arg1;
- (void)setContentName:(id)arg1;
- (void)setFileURLType:(id)arg1;
- (void)setUseNewLoadingAPI:(bool)arg1;
- (bool)useNewLoadingAPI;

@end
