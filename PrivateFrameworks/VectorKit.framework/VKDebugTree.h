
@interface VKDebugTree : NSObject {
    struct DebugTreeNode { 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } _name; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } _identifier; 
        struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { 
            struct DebugTreeNode {} *__begin_; 
            struct DebugTreeNode {} *__end_; 
            struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { 
                struct DebugTreeNode {} *__value_; 
            } __end_cap_; 
        } _children; 
        struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { 
            struct DebugTreeProperty {} *__begin_; 
            struct DebugTreeProperty {} *__end_; 
            struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { 
                struct DebugTreeProperty {} *__value_; 
            } __end_cap_; 
        } _properties; 
    }  _debugTree;
    NSArray * _nodes;
    struct bitset<4UL> { 
        unsigned long long __first_; 
    }  _options;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct optional<gdc::DebugTreeNode> { bool x1; union ValueUnion { unsigned char x_2_1_1[96]; struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_1_3_1; } x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; } x_2_1_2; } x2; })_deserializeNode:(id)arg1;
- (struct optional<gdc::DebugTreeProperty> { bool x1; union ValueUnion { unsigned char x_2_1_1[80]; struct DebugTreeProperty { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_1_3_1; } x_2_2_1; int x_2_2_2; struct vector<gdc::DebugTreeValue, std::allocator<gdc::DebugTreeValue>> { struct DebugTreeValue {} *x_3_3_1; struct DebugTreeValue {} *x_3_3_2; struct __compressed_pair<gdc::DebugTreeValue *, std::allocator<gdc::DebugTreeValue>> { struct DebugTreeValue {} *x_3_4_1; } x_3_3_3; } x_2_2_3; struct vector<std::string, std::allocator<std::string>> { void *x_4_3_1; void *x_4_3_2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_4_1; } x_4_3_3; } x_2_2_4; } x_2_1_2; } x2; })_deserializeProperty:(id)arg1;
- (struct optional<gdc::DebugTreeValue> { bool x1; union ValueUnion { unsigned char x_2_1_1[64]; struct DebugTreeValue { struct ValueStruct { long long x_1_3_1; unsigned long long x_1_3_2; double x_1_3_3; bool x_1_3_4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_8_1; unsigned long long x_1_8_2; unsigned int x_1_8_3 : 63; unsigned int x_1_8_4 : 1; } x_1_7_1; struct __short { BOOL x_2_8_1[23]; unsigned char x_2_8_2[0]; unsigned int x_2_8_3 : 7; unsigned int x_2_8_4 : 1; } x_1_7_2; struct __raw { unsigned long long x_3_8_1[3]; } x_1_7_3; } x_1_6_1; } x_1_5_1; } x_5_4_1; } x_1_3_5; } x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; })_deserializeValue:(id)arg1;
- (void)_outputTree:(void*)arg1;
- (void)_populateData;
- (id)_serializeNode:(const void*)arg1;
- (id)_serializeProperty:(const void*)arg1;
- (id)_serializeValue:(const void*)arg1;
- (bool)deserializeTree:(id)arg1;
- (bool)deserializeZippedTree:(id)arg1;
- (void)disableAllOptions;
- (void)enableAllOptions;
- (const void*)internalData;
- (id)logTree;
- (id)nodes;
- (void)populateData:(id)arg1;
- (void)printTree;
- (void)replaceInternalData:(const void*)arg1;
- (id)serializeTree;
- (id)serializeZippedTree;
- (void)setOption:(unsigned long long)arg1 value:(bool)arg2;
- (void)setOptions:(id)arg1;

@end
