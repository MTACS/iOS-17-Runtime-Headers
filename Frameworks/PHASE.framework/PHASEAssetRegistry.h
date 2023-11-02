
@interface PHASEAssetRegistry : NSObject <MetaParameterValueProtocol> {
    struct unordered_map<unsigned long long, PHASEAsset *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PHASEAsset *>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, PHASEAsset *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, PHASEAsset *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _assetLookup;
    PHASEEngine * _engine;
    NSMutableDictionary * _metaParameterDictionary;
    struct unordered_map<unsigned long long, std::unique_ptr<Phase::StringPool>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::unique_ptr<Phase::StringPool>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _stringPools;
}

@property (readonly, copy) NSDictionary *globalMetaParameters;
@property (nonatomic, retain) NSMutableDictionary *metaParameterDictionary;
@property (nonatomic, readonly) unsigned long long sizeInBytes;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addAssetInternal:(id)arg1 assetId:(unsigned long long)arg2 outError:(id*)arg3;
- (bool)addAssetInternal:(id)arg1 assetId:(unsigned long long)arg2 stringPoolBuilder:(void*)arg3 outError:(id*)arg4;
- (id)assetForIdentifier:(id)arg1;
- (id)assetInfoString:(long long)arg1;
- (const void*)getActionTree:(unsigned long long)arg1;
- (id)getAssetForUID:(id)arg1;
- (const void*)getChannelMapping:(unsigned long long)arg1;
- (id)getGlobalMetaParameter:(unsigned long long)arg1;
- (id)getMixerInformationForActionTreeWithUID:(id)arg1;
- (const struct SoundAssetInfo { int (**x1)(); long long x2; unsigned long long x3; long long x4; int x5; unsigned int x6; double x7; }*)getSoundAssetInfo:(unsigned long long)arg1;
- (const char *)getString:(unsigned long long)arg1;
- (const char *)getStringEmpty:(unsigned long long)arg1;
- (id)getUniqueIdentifier;
- (id)globalMetaParameters;
- (id)init;
- (id)initWithEngine:(id)arg1;
- (void)logAddAsset:(id)arg1;
- (void)logRemoveAsset:(id)arg1;
- (id)makeMetaParameterFromDefinition:(id)arg1;
- (id)makeSoundAssetWithURL:(id)arg1 uid:(id)arg2 assetType:(long long)arg3 channelLayout:(id)arg4 normalizationMode:(long long)arg5 targetLKFS:(double)arg6 ownerTask:(unsigned int)arg7 outError:(id*)arg8;
- (id)metaParameterDictionary;
- (id)mixerInformationForActionTreeWithIdentifier:(id)arg1;
- (id)registerActionTreeWithRootNode:(id)arg1 uid:(id)arg2 outError:(id*)arg3;
- (id)registerGlobalMetaParameter:(id)arg1 error:(id*)arg2;
- (id)registerJSONDataBundleWithURL:(id)arg1 assetBaseURL:(id)arg2 identifier:(id)arg3 error:(id*)arg4;
- (id)registerJSONDataBundleWithURL:(id)arg1 assetBaseURL:(id)arg2 uid:(id)arg3 outError:(id*)arg4;
- (id)registerSoundAssetAtURL:(id)arg1 identifier:(id)arg2 assetType:(long long)arg3 channelLayout:(id)arg4 normalizationMode:(long long)arg5 error:(id*)arg6;
- (id)registerSoundAssetAtURL:(id)arg1 identifier:(id)arg2 assetType:(long long)arg3 channelLayout:(id)arg4 normalizationMode:(long long)arg5 ownerTask:(unsigned int)arg6 error:(id*)arg7;
- (id)registerSoundAssetAtURL:(id)arg1 identifier:(id)arg2 assetType:(long long)arg3 channelLayout:(id)arg4 normalizationMode:(long long)arg5 targetLKFS:(id)arg6 ownerTask:(unsigned int)arg7 error:(id*)arg8;
- (id)registerSoundAssetWithAudioFileData:(id)arg1 identifier:(id)arg2 assetType:(long long)arg3 fileTypeHint:(unsigned int)arg4 channelLayout:(id)arg5 error:(id*)arg6;
- (id)registerSoundAssetWithAudioFileData:(id)arg1 identifier:(id)arg2 assetType:(long long)arg3 fileTypeHint:(unsigned int)arg4 channelLayout:(id)arg5 normalizationMode:(long long)arg6 error:(id*)arg7;
- (id)registerSoundAssetWithAudioFileData:(id)arg1 identifier:(id)arg2 assetType:(long long)arg3 fileTypeHint:(unsigned int)arg4 channelLayout:(id)arg5 normalizationMode:(long long)arg6 ownerTask:(unsigned int)arg7 error:(id*)arg8;
- (id)registerSoundAssetWithAudioFileData:(id)arg1 identifier:(id)arg2 assetType:(long long)arg3 fileTypeHint:(unsigned int)arg4 channelLayout:(id)arg5 normalizationMode:(long long)arg6 targetLKFS:(id)arg7 ownerTask:(unsigned int)arg8 error:(id*)arg9;
- (id)registerSoundAssetWithAudioFileData:(id)arg1 uid:(id)arg2 assetType:(long long)arg3 fileTypeHint:(unsigned int)arg4 channelLayout:(id)arg5 referenceGainDBSPL:(double)arg6 outError:(id*)arg7;
- (id)registerSoundAssetWithData:(id)arg1 identifier:(id)arg2 format:(id)arg3 normalizationMode:(long long)arg4 error:(id*)arg5;
- (id)registerSoundAssetWithData:(id)arg1 identifier:(id)arg2 format:(id)arg3 normalizationMode:(long long)arg4 ownerTask:(unsigned int)arg5 error:(id*)arg6;
- (id)registerSoundAssetWithData:(id)arg1 identifier:(id)arg2 format:(id)arg3 normalizationMode:(long long)arg4 targetLKFS:(id)arg5 ownerTask:(unsigned int)arg6 error:(id*)arg7;
- (id)registerSoundAssetWithData:(id)arg1 uid:(id)arg2 format:(id)arg3 referenceGainDBSPL:(double)arg4 outError:(id*)arg5;
- (id)registerSoundAssetWithURL:(id)arg1 uid:(id)arg2 assetType:(long long)arg3 channelLayout:(id)arg4 referenceGainDBSPL:(double)arg5 outError:(id*)arg6;
- (id)registerSoundEventAssetWithRootNode:(id)arg1 identifier:(id)arg2 error:(id*)arg3;
- (id)registerSoundEventAssetWithRootNode:(id)arg1 uid:(id)arg2 error:(id*)arg3;
- (void)removeAll;
- (bool)removeAssetInternal:(id)arg1;
- (void)setMetaParameter:(id)arg1 value:(id)arg2;
- (void)setMetaParameter:(id)arg1 value:(double)arg2 withTimeInterval:(double)arg3;
- (void)setMetaParameterDictionary:(id)arg1;
- (unsigned long long)sizeInBytes;
- (void)unregisterAssetWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterAssetWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)unregisterAssetWithUID:(id)arg1;
- (void)unregisterAssetWithUID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
