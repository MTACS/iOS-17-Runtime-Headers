
@interface SNNMILContext : NSObject {
    struct shared_ptr<MIL::MILContext> { 
        struct MILContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _context;
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
    }  _opsetName;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{basic_string<char' */ struct  opsetName; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}} */

+ (id)valueForIRListValueType:(const struct IRListValueType { int (**x1)(); }*)arg1 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;
+ (id)valueForIRTensorValue:(const struct IRTensorValue { int (**x1)(); }*)arg1;
+ (id)valueForIRTensorValueType:(const struct IRTensorValueType { int (**x1)(); }*)arg1 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;
+ (id)valueForIRValue:(const struct IRValue { int (**x1)(); }*)arg1;
+ (id)valueForIRValueType:(const struct IRValueType { int (**x1)(); }*)arg1 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<MIL::MILContext> { struct MILContext {} *x1; struct __shared_weak_count {} *x2; })context;
- (void)dealloc;
- (id)init;
- (id)initWithOpsetName:(id)arg1;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue {} *x_1_1_1; } x1; })milValueForScalarWithBytes:(void*)arg1 dataType:(unsigned long long)arg2;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue {} *x_1_1_1; } x1; })milValueForString:(id)arg1;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue {} *x_1_1_1; } x1; })milValueForTensorBlobWithFilename:(id)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 offset:(id)arg4;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue {} *x_1_1_1; } x1; })milValueForTensorWithBytes:(void*)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })opsetName;
- (const void*)platformOpset;

@end
