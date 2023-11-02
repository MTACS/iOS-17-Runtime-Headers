
@interface WFContentCollection : NSObject <NSCopying, NSSecureCoding, QLPreviewControllerDataSource> {
    WFCoercionOptions * _defaultCoercionOptions;
    NSLock * _itemWriteLock;
    NSMutableArray * _mutableItems;
}

@property (nonatomic, readonly) WFContentAttributionSet *attributionSet;
@property (nonatomic, retain) WFCoercionOptions *defaultCoercionOptions;
@property (nonatomic, readonly) NSArray *extensionItems;
@property (nonatomic, retain) NSLock *itemWriteLock;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *minimalExtensionItems;
@property (nonatomic, retain) NSMutableArray *mutableItems;
@property (nonatomic, readonly) long long numberOfItems;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (void)_generateCollectionFromPasteboard:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)collectionWithItems:(id)arg1;
+ (void)generateCollectionFromDragItems:(id)arg1 allowedItemClasses:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)generateCollectionFromPasteboard:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getContentItemsForPasteboardItems:(id)arg1 resultBlock:(id /* block */)arg2;
+ (id)requiredResourcesForContentInPasteboard:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addFile:(id)arg1;
- (void)addFile:(id)arg1 origin:(id)arg2 disclosureLevel:(unsigned long long)arg3;
- (void)addFileWithOriginAttribution:(id)arg1;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 named:(id)arg2;
- (id)attributionSet;
- (bool)canPerformCoercion:(id)arg1;
- (id)collectionByFilteringItemsWithBlock:(id /* block */)arg1 excludedItems:(id*)arg2;
- (id)collectionByFilteringToItemClass:(Class)arg1 excludedItems:(id*)arg2;
- (id)collectionByMergingAttributionSet:(id)arg1;
- (void)copyToPasteboard:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultCoercionOptions;
- (id)description;
- (id)effectiveCoercionOptionsForRequest:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateFileRepresentations:(id /* block */)arg1 forType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enumerateObjectRepresentations:(id /* block */)arg1 forClass:(Class)arg2 completionHandler:(id /* block */)arg3;
- (id)extensionItems;
- (void)generateCollectionByCoercingToItemClass:(Class)arg1 completionHandler:(id /* block */)arg2;
- (void)generateCollectionByCoercingToItemClass:(Class)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateCollectionByCoercingToItemClasses:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateCollectionByCoercingToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateCollectionByEvaluatingQuery:(id)arg1 forContentItemClass:(Class)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getFileRepresentation:(id /* block */)arg1 forType:(id)arg2;
- (void)getFileRepresentationAndAttributionSet:(id /* block */)arg1 forType:(id)arg2;
- (void)getFileRepresentations:(id /* block */)arg1 forType:(id)arg2;
- (void)getFileRepresentations:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getObjectRepresentation:(id /* block */)arg1 forClass:(Class)arg2;
- (void)getObjectRepresentationAndAttributionSet:(id /* block */)arg1 forClass:(Class)arg2;
- (void)getObjectRepresentations:(id /* block */)arg1 forClass:(Class)arg2;
- (void)getObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getRichTextRepresentation:(id /* block */)arg1;
- (void)getStringRepresentation:(id /* block */)arg1;
- (void)getStringRepresentations:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultCoercionOptions:(id)arg1;
- (id)initWithItems:(id)arg1 defaultCoercionOptions:(id)arg2;
- (bool)isCoercibleToItemClass:(Class)arg1;
- (bool)isCoercibleToItemClasses:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemWriteLock;
- (id)items;
- (id)minimalExtensionItems;
- (id)mutableItems;
- (long long)numberOfItems;
- (void)performCoercion:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)requiredResourcesForContent;
- (void)setDefaultCoercionOptions:(id)arg1;
- (void)setItemWriteLock:(id)arg1;
- (void)setMutableItems:(id)arg1;
- (void)transformFileRepresentationsForType:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)transformFirstFileRepresentationForType:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)transformFirstObjectRepresentationForClass:(Class)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)transformItemsAndFlattenUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)transformItemsUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)transformObjectRepresentationsForClass:(Class)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (void)getShareableObjectsOfTypes:(unsigned long long)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (void)generatePreviewControllerDataSource:(id /* block */)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewProxyItemAtIndex:(long long)arg1 refreshBlock:(id)arg2;

@end
