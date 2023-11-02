
@interface SIVisualLogger : NSObject {
    struct VZDestination { } * _fileDestination;
    struct VZDestination { } * _networkDestination;
    NSSet * _registeredSubloggers;
    struct VZLogger { } * _visualLogger;
    struct unordered_map<const char *, VZSubLogger *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, VZSubLogger *>>> { 
        struct __hash_table<std::__hash_value_type<const char *, VZSubLogger *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::hash<const char *>, std::equal_to<const char *>>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::equal_to<const char *>, std::hash<const char *>>, std::allocator<std::__hash_value_type<const char *, VZSubLogger *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, VZSubLogger *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::hash<const char *>, std::equal_to<const char *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, VZSubLogger *>, std::equal_to<const char *>, std::hash<const char *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _vlSubloggerMap;
}

@property (nonatomic, readonly) struct VZLogger { }*internalVisualLoggerRef;
@property (nonatomic, readonly) NSSet *registeredSubloggers;

+ (id)_discoverSubloggers;
+ (id)defaultLogPath;
+ (id)frameworkPrefix;
+ (id)sharedLogger;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_arrayOfNumbersToData:(id)arg1 valueType:(unsigned long long*)arg2;
- (void)_disableAllLogs;
- (bool)_stopLoggingToFile;
- (bool)_stopLoggingToHost;
- (struct Ref<const VZDataInfo *> { struct shared_ptr<const void> { void *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; })createDataInfoAt:(double)arg1 name:(id)arg2;
- (void)dealloc;
- (void)enableLogger:(id)arg1;
- (id)init;
- (struct VZLogger { }*)internalVisualLoggerRef;
- (bool)isLoggerEnabled:(id)arg1;
- (void)logAndReleaseError:(struct __CFError { }*)arg1;
- (bool)logBinaryData:(id)arg1 at:(double)arg2 sublogger:(id)arg3 name:(id)arg4;
- (bool)logDictionary:(id)arg1 at:(double)arg2 sublogger:(id)arg3 name:(id)arg4;
- (bool)logIOSurface:(struct __IOSurface { }*)arg1 at:(double)arg2 sublogger:(id)arg3 name:(id)arg4;
- (bool)logNumber:(id)arg1 at:(double)arg2 sublogger:(id)arg3 name:(id)arg4;
- (bool)logNumbers:(id)arg1 at:(double)arg2 sublogger:(id)arg3 name:(id)arg4;
- (bool)logPixelBuffer:(struct __CVBuffer { }*)arg1 at:(double)arg2 sublogger:(id)arg3 name:(id)arg4;
- (id)registeredSubloggers;
- (bool)startLoggingToFile:(id)arg1;
- (bool)startLoggingToFile:(id)arg1 synchronously:(bool)arg2;
- (bool)startLoggingToHost:(id)arg1;
- (bool)stopAndDisableLogging;

@end
