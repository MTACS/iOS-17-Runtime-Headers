
@interface _OTSVGParserDelegate : NSObject <NSXMLParserDelegate> {
    bool  errorOccurred;
    struct unordered_map<std::string, std::stack<std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::stack<std::string>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::stack<std::string>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::stack<std::string>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  namespaces;
    void * root;
    unsigned int  skipDepth;
    struct vector<std::reference_wrapper<SVG::Element>, std::allocator<std::reference_wrapper<SVG::Element>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::reference_wrapper<SVG::Element> *, std::allocator<std::reference_wrapper<SVG::Element>>> { 
            void *__value_; 
        } __end_cap_; 
    }  stack;
    unsigned int  unitsPerEm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool errorOccurred;
@property (readonly) unsigned long long hash;
@property /* Warning: unhandled struct encoding: '{unordered_map<std::string' */ struct  namespaces; /* unknown property attribute:  std::hash<std::string>>>=f}}} */
@property void*root;
@property unsigned int skipDepth;
@property /* Warning: unhandled struct encoding: '{vector<std::reference_wrapper<SVG::Element>' */ struct  stack; /* unknown property attribute:  std::allocator<std::reference_wrapper<SVG::Element>>>=^v}} */
@property (readonly) Class superclass;
@property unsigned int unitsPerEm;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)errorOccurred;
- (id)initWithUnitsPerEm:(unsigned int)arg1;
- (struct unordered_map<std::string, std::stack<std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::stack<std::string>>>> { struct __hash_table<std::__hash_value_type<std::string, std::stack<std::string>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::stack<std::string>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })namespaces;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void*)root;
- (void)setErrorOccurred:(bool)arg1;
- (void)setNamespaces:(struct unordered_map<std::string, std::stack<std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::stack<std::string>>>> { struct __hash_table<std::__hash_value_type<std::string, std::stack<std::string>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::stack<std::string>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (void)setRoot:(void*)arg1;
- (void)setSkipDepth:(unsigned int)arg1;
- (void)setStack:(struct vector<std::reference_wrapper<SVG::Element>, std::allocator<std::reference_wrapper<SVG::Element>>> { void *x1; void *x2; struct __compressed_pair<std::reference_wrapper<SVG::Element> *, std::allocator<std::reference_wrapper<SVG::Element>>> { void *x_3_1_1; } x3; })arg1;
- (void)setUnitsPerEm:(unsigned int)arg1;
- (unsigned int)skipDepth;
- (struct vector<std::reference_wrapper<SVG::Element>, std::allocator<std::reference_wrapper<SVG::Element>>> { void *x1; void *x2; struct __compressed_pair<std::reference_wrapper<SVG::Element> *, std::allocator<std::reference_wrapper<SVG::Element>>> { void *x_3_1_1; } x3; })stack;
- (unsigned int)unitsPerEm;

@end
