
@interface PXGTextureManager : NSObject <PXGTextureAtlasManagerDelegate, PXGTextureProviderDelegate> {
    NSObject<OS_dispatch_queue> * _adjustQueue;
    bool  _allowLargerImagesDuringScrollingInLowMemoryMode;
    unsigned char  _atlasPresentationType;
    <PXGTextureConverter> * _atlasTextureConverter;
    NSObject<OS_dispatch_queue> * _deallocationsQueue;
    <PXGTextureManagerDelegate> * _delegate;
    bool  _didSwitchTextureConverter;
    <PXGMutableSpriteTexture> * _emptyTexture;
    PXGEntityManager * _entityManager;
    bool  _isInactive;
    _Atomic unsigned char  _isPerformingUpdateFromRequestQueue;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    NSIndexSet * _loadedSpriteIndexes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lookupLock;
    struct unordered_map<int, PXGRequestDetails, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, PXGRequestDetails>>> { 
        struct __hash_table<std::__hash_value_type<int, PXGRequestDetails>, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>>, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>>, std::allocator<std::__hash_value_type<int, PXGRequestDetails>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _lookupLock_requestDetailsByRequestID;
    NSMapTable * _lookupLock_textureByKeyByPresentationType;
    bool  _lowMemoryMode;
    NSMapTable * _pendingSpriteTextureByRequestID;
    NSMutableSet * _placeholderTextures;
    bool  _preferBGRA;
    bool  _preferMipmaps;
    unsigned long long  _preferredColorSpaceName;
    PXGTextureManagerPreheatingStrategy * _preheatingStrategy;
    NSObject<OS_dispatch_queue> * _processQueue;
    NSObject<OS_dispatch_queue> * _requestQueue;
    unsigned long long  _requestQueue_pendingSetNeedsUpdate;
    struct unordered_map<int, unsigned int, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, unsigned int>>> { 
        struct __hash_table<std::__hash_value_type<int, unsigned int>, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>>, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>>, std::allocator<std::__hash_value_type<int, unsigned int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _spriteIndexByRequestID;
    NSHashTable * _spriteTexturesInUse;
    long long  _streamCount;
    struct { struct { unsigned int x_1_1_1; } x1; int x2; unsigned char x3; unsigned char x4; unsigned short x5; void *x6; unsigned int x7; void *x8; unsigned int x9; unsigned int x10; unsigned char x11; } * _streamInfoBySpriteIndex;
    unsigned long long  _streamInfoBySpriteIndexCapacity;
    unsigned long long  _streamInfoBySpriteIndexCount;
    NSArray * _textureAtlasManagers;
    NSDictionary * _textureConverterByPresentationType;
    NSArray * _textureConverters;
    NSMutableDictionary * _textureProviderByMediaKind;
    NSMapTable * _textureProvidersDisplayLinkRegistrationState;
    NSDictionary * _texturesByPresentationType;
    NSArray * _trackedComponents;
    PXGViewEnvironment * _viewEnvironment;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool allowLargerImagesDuringScrollingInLowMemoryMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGTextureManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXGEntityManager *entityManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInactive;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic) bool preferBGRA;
@property (nonatomic) bool preferMipmaps;
@property (nonatomic) unsigned long long preferredColorSpaceName;
@property (nonatomic, retain) PXGTextureManagerPreheatingStrategy *preheatingStrategy;
@property (nonatomic, readonly) long long streamCount;
@property (readonly) Class superclass;
@property (retain) NSArray *textureAtlasManagers;
@property (nonatomic, copy) NSArray *textureConverters;
@property (nonatomic, readonly) NSDictionary *texturesByPresentationType;
@property (nonatomic, retain) PXGViewEnvironment *viewEnvironment;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addTextureToTexturesInUse:(id)arg1;
- (void)_applyAdjustment:(id)arg1 withMipmaps:(bool)arg2 toTexture:(id)arg3 fromTextureProvider:(id)arg4 withTextureConverter:(id)arg5 forRequestID:(int)arg6 deliveryOrder:(unsigned int)arg7 requestDetails:(struct { unsigned char x1; unsigned int x2; })arg8;
- (void)_blockOnThumbnailsIfNeededWithGeometries:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 interactionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg3 fences:(id)arg4;
- (void)_configureAllTextureConverters;
- (void)_configureAllTextureProviders;
- (void)_configureTextureConverter:(id)arg1;
- (void)_configureTextureProvider:(id)arg1;
- (id)_createTextureForCGImage:(struct CGImage { }*)arg1 requestID:(int)arg2 requestDetails:(struct { unsigned char x1; unsigned int x2; })arg3 processingOptions:(struct { bool x1; float x2; bool x3; })arg4 fromTextureProvider:(id)arg5 withTextureConverter:(id)arg6;
- (id)_createTextureForCVPixelBuffer:(struct __CVBuffer { }*)arg1 requestID:(int)arg2 requestDetails:(struct { unsigned char x1; unsigned int x2; })arg3 processingOptions:(struct { bool x1; float x2; bool x3; })arg4 fromTextureProvider:(id)arg5 withTextureConverter:(id)arg6;
- (void)_enumerateSpriteTextures:(id /* block */)arg1;
- (void)_enumerateTextureConverters:(id /* block */)arg1;
- (void)_enumerateTextureProviders:(id /* block */)arg1;
- (id)_existingAdjustedTextureForSourceTexture:(id)arg1 adjustment:(id)arg2 wantsMipmaps:(bool)arg3 presentationType:(unsigned char)arg4;
- (id)_existingTextureForCGImage:(struct CGImage { }*)arg1 processingOptions:(struct { bool x1; float x2; bool x3; })arg2 presentationType:(unsigned char)arg3;
- (id)_existingTextureForKey:(id)arg1 presentationType:(unsigned char)arg2;
- (id)_existingTextureForPayload:(id)arg1 presentationType:(unsigned char)arg2;
- (id)_existingTextureForPixelBuffer:(struct __CVBuffer { }*)arg1 processingOptions:(struct { bool x1; float x2; bool x3; })arg2 presentationType:(unsigned char)arg3;
- (bool)_getRequestDetails:(out struct { unsigned char x1; unsigned int x2; }*)arg1 forRequestID:(int)arg2;
- (void)_handleProvidedSpriteTexture:(id)arg1 fromTextureProvider:(id)arg2 requestID:(int)arg3 deliveryOrder:(unsigned int)arg4;
- (void)_lookupLock_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 textureProvider:(id)arg2 mediaKind:(unsigned char)arg3 presentationType:(unsigned char)arg4 isAppearing:(bool)arg5 layout:(id)arg6 leafSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg7 sprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg8 textureStreamInfos:(struct { struct { unsigned int x_1_1_1; } x1; int x2; unsigned char x3; unsigned char x4; unsigned short x5; void *x6; unsigned int x7; void *x8; unsigned int x9; unsigned int x10; unsigned char x11; }*)arg9 loadingStatus:(id)arg10;
- (void)_processCGImage:(struct CGImage { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 adjustment:(id)arg3 isDegraded:(bool)arg4 fromTextureProvider:(id)arg5 withTextureConverter:(id)arg6 requestID:(int)arg7 requestDetails:(struct { unsigned char x1; unsigned int x2; })arg8 deliveryOrder:(unsigned int)arg9;
- (void)_processPixelBuffer:(struct __CVBuffer { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 adjustment:(id)arg3 fromTextureProvider:(id)arg4 withTextureConverter:(id)arg5 forRequestID:(int)arg6 requestDetails:(struct { unsigned char x1; unsigned int x2; })arg7 deliveryOrder:(unsigned int)arg8;
- (long long)_processTextureProviderResults;
- (void)_pruneTextures:(id)arg1;
- (void)_registerTextureConverter:(id)arg1 forPresentationType:(unsigned char)arg2;
- (void)_removeAllTexturesForPresentationType:(unsigned char)arg1;
- (void)_requestQueue_scheduleUpdateIfAllowed;
- (void)_requestQueue_setNeedsUpdate;
- (void)_resizeStorageIfNeededForSpriteCount:(long long)arg1;
- (void)_setNeedsUpdate;
- (id)_storeAdjustedTexture:(id)arg1 forSourceTexture:(id)arg2 adjustment:(id)arg3 mipmaps:(bool)arg4;
- (id)_storeTexture:(id)arg1 forKey:(id)arg2;
- (id)_storeTexture:(id)arg1 forKey:(id)arg2 replaceExisting:(bool)arg3;
- (id)_storeTexture:(id)arg1 forPayload:(id)arg2;
- (void)_streamTexturesForSpritesInDataStore:(id)arg1 presentationDataStore:(id)arg2 changeDetails:(id)arg3 layout:(id)arg4 interactionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg5 loadingStatus:(id)arg6;
- (id)_textureAtlasManagerForImageDataSpec:(struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })arg1;
- (id)_textureConverterForPresentationType:(unsigned char)arg1 contentType:(unsigned long long)arg2;
- (void)_updatePreheatingStrategy;
- (bool)allowLargerImagesDuringScrollingInLowMemoryMode;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)entityManager;
- (id)initWithEntityManager:(id)arg1 layoutQueue:(id)arg2;
- (bool)isInactive;
- (id)layoutQueue;
- (bool)lowMemoryMode;
- (bool)preferBGRA;
- (bool)preferMipmaps;
- (unsigned long long)preferredColorSpaceName;
- (id)preheatingStrategy;
- (void)registerTextureProvider:(id)arg1 forMediaKind:(unsigned char)arg2;
- (void)releaseCachedResources;
- (void)setAllowLargerImagesDuringScrollingInLowMemoryMode:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInactive:(bool)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setPreferBGRA:(bool)arg1;
- (void)setPreferMipmaps:(bool)arg1;
- (void)setPreferredColorSpaceName:(unsigned long long)arg1;
- (void)setPreheatingStrategy:(id)arg1;
- (void)setTextureAtlasManagers:(id)arg1;
- (void)setTextureConverters:(id)arg1;
- (void)setViewEnvironment:(id)arg1;
- (void)simulateTextureLoad;
- (long long)streamCount;
- (void)streamTexturesForSpritesInDataStore:(id)arg1 presentationDataStore:(id)arg2 changeDetails:(id)arg3 layout:(id)arg4 interactionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg5;
- (bool)streamUpdatedTexturesForDisplayLinkIfNeeded:(id)arg1;
- (bool)textureAtlasManagerShouldPruneUnusedTextures:(id)arg1;
- (id)textureAtlasManagers;
- (id)textureConverters;
- (void)textureProvider:(id)arg1 didProvideCGImage:(struct CGImage { }*)arg2 options:(struct { bool x1; float x2; bool x3; })arg3 adjustment:(id)arg4 isDegraded:(bool)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(id)arg1 didProvideFailureWithError:(id)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4 bytesPerRow:(unsigned long long)arg5 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 forRequestID:(int)arg7;
- (void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2;
- (void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(id)arg1 didProvidePixelBuffer:(struct __CVBuffer { }*)arg2 options:(struct { bool x1; float x2; bool x3; })arg3 adjustment:(id)arg4 forRequestID:(int)arg5;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1;
- (struct CGImage { }*)textureSnapshotForSpriteIndex:(unsigned int)arg1;
- (id)texturesByPresentationType;
- (id)viewEnvironment;

@end
