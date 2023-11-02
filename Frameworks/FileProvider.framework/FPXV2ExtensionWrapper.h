
@interface FPXV2ExtensionWrapper : NSObject <NSFileProviderCustomAction, NSFileProviderIncrementalContentFetching, NSFileProviderReplicatedExtension, NSFileProviderSearching, NSFileProviderServicing, NSFileProviderThumbnailing, NSFileProviderUserInteractionSuppressing> {
    NSFileProviderExtension * _extension;
    Class  _extensionClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileProviderExtension *extension;
@property (nonatomic, retain) Class extensionClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 request:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)deleteItemWithIdentifier:(id)arg1 baseVersion:(id)arg2 options:(unsigned long long)arg3 request:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)enumeratorForContainerItemIdentifier:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (id)enumeratorForSearch:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (id)extension;
- (Class)extensionClass;
- (id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 usingExistingContentsAtURL:(id)arg3 existingVersion:(id)arg4 request:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)fetchThumbnailsForItemIdentifiers:(id)arg1 requestedSize:(struct CGSize { double x1; double x2; })arg2 perThumbnailCompletionHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)importDidFinishWithCompletionHandler:(id /* block */)arg1;
- (id)initWithDomain:(id)arg1;
- (void)invalidate;
- (bool)isInteractionSuppressedForIdentifier:(id)arg1;
- (id)itemForIdentifier:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)materializedItemsDidChangeWithCompletionHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)modifyItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 request:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setExtensionClass:(Class)arg1;
- (void)setInteractionSuppressed:(bool)arg1 forIdentifier:(id)arg2;
- (id)supportedServiceSourcesForItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
