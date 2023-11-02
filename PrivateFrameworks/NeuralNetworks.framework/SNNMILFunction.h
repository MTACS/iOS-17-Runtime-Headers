
@interface SNNMILFunction : NSObject {
    struct shared_ptr<MIL::IRFunction> { 
        struct IRFunction {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _function;
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
    }  _name;
    NSEnumerator * _operationEnumerator;
}

@property (nonatomic, readonly) NSArray *inputNames;
@property (nonatomic, readonly) long long operationCount;
@property (nonatomic, readonly) NSEnumerator *operationEnumerator;
@property (nonatomic, readonly) NSArray *outputNames;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFunction:(struct shared_ptr<MIL::IRFunction> { struct IRFunction {} *x1; struct __shared_weak_count {} *x2; })arg1 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;
- (id)inputNames;
- (id)inputWithName:(id)arg1;
- (struct shared_ptr<MIL::IRFunction> { struct IRFunction {} *x1; struct __shared_weak_count {} *x2; })milFunction;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })name;
- (id)operationAtIndex:(long long)arg1;
- (long long)operationCount;
- (id)operationEnumerator;
- (id)outputNames;

@end
