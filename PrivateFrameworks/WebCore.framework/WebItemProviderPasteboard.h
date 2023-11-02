
@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard> {
    long long  _changeCount;
    <UIDropSession> * _dropSession;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _itemProviders;
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _loadResults;
    long long  _numberOfItems;
    long long  _pendingOperationCount;
    struct RetainPtr<NSArray<WebItemProviderRegistrationInfoList *>> { 
        void *m_ptr; 
    }  _stagedRegistrationInfoLists;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _supportedTypeIdentifiers;
}

@property (nonatomic, readonly) NSArray *allDroppedFileURLs;
@property (nonatomic) long long changeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPendingOperation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *itemProviders;
@property (nonatomic, readonly) long long numberOfFiles;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long pendingOperationCount;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;
- (id)allDroppedFileURLs;
- (long long)changeCount;
- (void)clearRegistrationLists;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)decrementPendingOperationCount;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)arg1;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)arg1 synchronousTimeout:(double)arg2;
- (void)enumerateItemProvidersWithBlock:(id /* block */)arg1;
- (id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id*)arg2;
- (bool)hasPendingOperation;
- (void)incrementPendingOperationCount;
- (id)init;
- (id)itemProviderAtIndex:(unsigned long long)arg1;
- (id)itemProviders;
- (long long)numberOfFiles;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (long long)pendingOperationCount;
- (void)setChangeCount:(long long)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setItemProviders:(id)arg1 dropSession:(id)arg2;
- (void)setNumberOfItems:(long long)arg1;
- (void)setPendingOperationCount:(long long)arg1;
- (void)stageRegistrationLists:(id)arg1;
- (id)takeRegistrationLists;
- (id)typeIdentifiersToLoad:(id)arg1;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
