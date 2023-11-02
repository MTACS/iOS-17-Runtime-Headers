
@interface VMUSymbolStore : NSObject <NSSecureCoding, NSXMLParserDelegate> {
    struct unordered_map<std::string, std::unordered_set<unsigned long long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _addressesGroupedByUuid;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
        struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { 
                struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<unsigned long long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _addressesTracker;
    bool  _debugStore;
    VMUDebugTimer * _debugTimer;
    VMUProcessObjectGraph * _graph;
    bool  _resymbolicatedSuccessfully;
    NSMutableDictionary * _resymbolicationUUIDs;
    NSData * _signature;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned long long  backtraceSample;
    unsigned long long  binarySection;
    unsigned long long  globalVariable;
    unsigned long long  mallocStackLogging;
    NSString * parsedKey;
    NSString * parsedResult;
    NSString * parsedValue;
    NSXMLParser * xmlParser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) VMUProcessObjectGraph *graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } symbolicator;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createResymbolicatedSignature;
- (id)_createSymbolicatorSignature;
- (void)_extractAddressesFromSymbolicator;
- (void)_flagSymbolOwnersForResymbolication;
- (bool)_getDsymPathsForUUIDs:(id)arg1 andReportProgress:(id)arg2;
- (void)_groupAddressTrackerByUuid;
- (bool)_readContentsOfDsymFile:(id)arg1 error:(id*)arg2;
- (bool)_refillSymbolOwnersWithDataAndReportProgress:(id)arg1;
- (void)addAddress:(unsigned long long)arg1 origin:(int)arg2;
- (void)addBacktrace:(id)arg1 origin:(int)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)graph;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 debugTimer:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (bool)resymbolicateWithDsymPath:(id)arg1 libraryNames:(id)arg2 all:(bool)arg3 progress:(id)arg4 showDebugInfo:(bool)arg5 error:(id*)arg6;
- (void)setGraph:(id)arg1;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicator;

@end
