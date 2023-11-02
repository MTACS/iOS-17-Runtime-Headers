
@interface _EXItemProviderCopyingLoadOperator : NSObject <_EXItemProviderLoading> {
    struct { 
        unsigned int val[8]; 
    }  _destinationProcessAuditToken;
    NSItemProvider * _itemProvider;
    NSDictionary * _loadedItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { unsigned int x1[8]; } destinationProcessAuditToken;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSItemProvider *itemProvider;
@property (nonatomic, retain) NSDictionary *loadedItems;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_loadItemsForTypeIdentifiers:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 itemProvider:(id)arg3;
- (id)_sandboxedResourceForItemIfNeeded:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 error:(id*)arg3;
- (void)dealloc;
- (struct { unsigned int x1[8]; })destinationProcessAuditToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemProvider:(id)arg1 destinationProcessAuditToken:(struct { unsigned int x1[8]; })arg2;
- (id)itemProvider;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (id)loadedItems;
- (void)setDestinationProcessAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setItemProvider:(id)arg1;
- (void)setLoadedItems:(id)arg1;

@end
