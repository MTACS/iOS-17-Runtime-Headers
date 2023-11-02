
@interface SNLPSSUMatcher : NSObject {
    NSObject * __systemEventLock;
    NSURL * _cacheDirectoryURL;
    struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { 
        struct __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { 
            struct SSUMatcher {} *__value_; 
        } __ptr_; 
    }  _cppMatcher;
}

@property (nonatomic, readonly) NSObject *_systemEventLock;
@property (readonly) NSURL *cacheDirectoryURL;

+ (struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::hash<std::string>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })_loadAppShortcutAlwaysTriggeredAllowList;
+ (id)matcherWithDirectories:(id)arg1 initializeModelsPreemptively:(bool)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithCacheDirectoryURL:(id)arg1 cppMatcher:(struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct SSUMatcher {} *x_1_1_1; } x1; })arg2;
- (bool)_performFullCacheUpdateInnerWithUserShortcuts:(id)arg1 applicationInfos:(id)arg2 error:(id*)arg3;
- (id)_systemEventLock;
- (id)cacheDirectoryURL;
- (bool)deregisterApp:(id)arg1 error:(id*)arg2;
- (bool)handleUserShortcutsDatabaseChanged:(id)arg1 error:(id*)arg2;
- (bool)performFullCacheUpdate:(id)arg1 error:(id*)arg2;
- (bool)performFullCacheUpdateWithUserShortcuts:(id)arg1 applicationInfos:(id)arg2 error:(id*)arg3;
- (bool)registerApp:(id)arg1 error:(id*)arg2;
- (id)responseForRequest:(id)arg1 error:(id*)arg2;

@end
