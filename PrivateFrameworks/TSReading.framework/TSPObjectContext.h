
@interface TSPObjectContext : NSObject <TSPDocumentResourceDownloader, TSPFileCoordinatorDelegate, TSPLazyReferenceDelegate, TSPObjectDelegate, TSPPassphraseConsumer, TSPSupportDirectoryDelegate> {
    TSPDataManager * _dataManager;
    SFUCryptoKey * _decryptionKey;
    <TSPObjectContextDelegate> * _delegate;
    bool  _documentHasCurrentFileFormatVersion;
    TSPObject * _documentObject;
    TSPObjectContainer * _documentObjectContainer;
    NSString * _documentPasswordHint;
    NSObject<OS_dispatch_queue> * _documentResourceDataProviderQueue;
    NSObject<OS_dispatch_queue> * _documentStateQueue;
    NSURL * _documentURL;
    NSUUID * _documentUUID;
    bool  _isDocumentModified;
    bool  _isPasswordProtected;
    bool  _isSupportModified;
    bool  _isWaitingForEndSave;
    long long  _lastObjectIdentifier;
    struct unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::equal_to<const long long>, std::allocator<std::pair<const long long, NSMutableArray *>>> { 
        struct __hash_table<std::__hash_value_type<const long long, NSMutableArray *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash>, std::allocator<std::__hash_value_type<const long long, NSMutableArray *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray *>, TSP::IdentifierHash, std::equal_to<const long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray *>, std::equal_to<const long long>, TSP::IdentifierHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _loadObservers;
    NSObject<OS_dispatch_queue> * _loadObserversQueue;
    unsigned int  _mode;
    int  _modifyObjectCount;
    long long  _modifyObjectToken;
    NSMapTable * _objects;
    NSObject<OS_dispatch_queue> * _objectsQueue;
    NSObject<OS_dispatch_group> * _outstandingReadsGroup;
    NSData * _passwordVerifier;
    NSObject<OS_dispatch_group> * _pendingEndSaveGroup;
    NSRecursiveLock * _readLock;
    NSObject<OS_dispatch_queue> * _runLoadObserversQueue;
    TSPObject * _supportObject;
    TSPObjectContainer * _supportObjectContainer;
    NSURL * _supportURL;
    TSUTemporaryDirectory * _temporaryDirectory;
    NSObject<OS_dispatch_queue> * _temporaryDirectoryQueue;
    NSUUID * _versionUUID;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) bool areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) TSPDataManager *dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) SFUCryptoKey *decryptionKey;
@property (nonatomic) <TSPObjectContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool documentHasCurrentFileFormatVersion;
@property (nonatomic, readonly) TSPObject *documentObject;
@property (nonatomic, retain) TSPObjectContainer *documentObjectContainer;
@property (nonatomic, copy) NSString *documentPasswordHint;
@property (nonatomic, readonly) NSURL *documentURL;
@property (nonatomic, readonly) NSUUID *documentUUID;
@property (nonatomic, readonly) long long estimatedDownloadSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreDocumentResourcesWhileReading;
@property (nonatomic, readonly) bool ignoreDocumentSupport;
@property (nonatomic, readonly) bool ignoreUnknownContentWhileReading;
@property (nonatomic, readonly) bool ignoreVersionCheckingWhileReading;
@property (nonatomic) bool isDocumentModified;
@property (nonatomic, readonly) bool isDocumentSupportTemporary;
@property (nonatomic, readonly) bool isEstimatedDownloadSizePrecise;
@property (nonatomic) bool isPasswordProtected;
@property (nonatomic) bool isSupportModified;
@property (nonatomic, readonly) NSData *keychainGenericItem;
@property (nonatomic) long long lastObjectIdentifier;
@property (nonatomic, readonly) bool needsDownload;
@property (nonatomic, readonly) NSString *passphraseHint;
@property (nonatomic, retain) NSData *passwordVerifier;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSPObject *supportObject;
@property (nonatomic, retain) TSPObjectContainer *supportObjectContainer;
@property (nonatomic, readonly) NSUUID *versionUUID;

+ (void)waitForPendingEndSaveGroup:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (bool)areExternalReferencesSupported;
- (bool)areExternalReferencesToDataAllowedAtURL:(id)arg1;
- (bool)areNewExternalReferencesToDataAllowed;
- (void)beginAssertOnModify;
- (void)beginIgnoringCachedObjectEviction;
- (void)beginWriteOperation;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (void)close;
- (id)context;
- (id)dataManager;
- (id)dataOrNilForIdentifier:(long long)arg1;
- (void)dealloc;
- (id)decryptionKey;
- (id)delegate;
- (void)didMoveSupportToURL:(id)arg1;
- (void)didMoveToURL:(id)arg1;
- (void)didReadDocumentObject:(id)arg1;
- (bool)documentHasCurrentFileFormatVersion;
- (id)documentObject;
- (id)documentObjectContainer;
- (id)documentPasswordHint;
- (id)documentRoot;
- (id)documentURL;
- (id)documentUUID;
- (void)endAssertOnModify;
- (void)endIgnoringCachedObjectEviction;
- (void)endWriteOperation;
- (long long)estimatedDownloadSize;
- (bool)ignoreDocumentResourcesWhileReading;
- (bool)ignoreDocumentSupport;
- (bool)ignoreUnknownContentWhileReading;
- (bool)ignoreVersionCheckingWhileReading;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isDocumentModified;
- (bool)isDocumentSupportTemporary;
- (bool)isEstimatedDownloadSizePrecise;
- (bool)isPasswordProtected;
- (bool)isSupportModified;
- (long long)lastObjectIdentifier;
- (long long)modifyObjectTokenForNewObject;
- (bool)needsDownload;
- (long long)newObjectIdentifier;
- (id)objectForIdentifier:(long long)arg1;
- (id)passwordVerifier;
- (void)performReadOperation:(id /* block */)arg1;
- (void)performReadOperationOnKnownObjects:(id /* block */)arg1;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)runObjectNotificationsInQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentObject:(id)arg1;
- (void)setDocumentObjectContainer:(id)arg1;
- (void)setDocumentPasswordHint:(id)arg1;
- (void)setIsDocumentModified:(bool)arg1;
- (void)setIsPasswordProtected:(bool)arg1;
- (void)setIsSupportModified:(bool)arg1;
- (void)setLastObjectIdentifier:(long long)arg1;
- (void)setPasswordVerifier:(id)arg1;
- (void)setSupportObject:(id)arg1;
- (void)setSupportObjectContainer:(id)arg1;
- (id)supportDirectoryURL;
- (id)supportObject;
- (id)supportObjectContainer;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (id)temporaryDirectory;
- (long long)updateModifyObjectToken;
- (id)versionUUID;
- (void)waitForSaveToFinishIfNeeded;

@end
