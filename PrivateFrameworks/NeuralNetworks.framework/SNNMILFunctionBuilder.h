
@interface SNNMILFunctionBuilder : NSObject {
    SNNMILContext * _context;
    SNNMILFunction * _function;
    struct map<std::string, const MIL::IRValueType *, std::less<std::string>, std::allocator<std::pair<const std::string, const MIL::IRValueType *>>> { 
        struct __tree<std::__value_type<std::string, const MIL::IRValueType *>, std::__map_value_compare<std::string, std::__value_type<std::string, const MIL::IRValueType *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, const MIL::IRValueType *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, const MIL::IRValueType *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, const MIL::IRValueType *>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _inputs;
    SNNMILSourceLocation * _location;
    NSString * _name;
    struct vector<std::shared_ptr<MIL::IROperation>, std::allocator<std::shared_ptr<MIL::IROperation>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<MIL::IROperation> *, std::allocator<std::shared_ptr<MIL::IROperation>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _operations;
    NSMutableArray * _outputNames;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _outputs;
    unsigned long long  _symbolCounter;
}

@property (nonatomic, readonly) SNNMILContext *context;
@property (nonatomic, readonly) SNNMILFunction *function;
@property (nonatomic, readonly) SNNMILSourceLocation *location;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{basic_string<char' */ struct  milName; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}} */
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSMutableArray *outputNames;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)build;
- (id)constantOperationWithValue:(struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue {} *x_1_1_1; } x1; })arg1 name:(id)arg2 location:(id)arg3;
- (id)constantScalar:(id)arg1 dataType:(unsigned long long)arg2 location:(id)arg3;
- (id)constantScalar:(id)arg1 dataType:(unsigned long long)arg2 name:(id)arg3 location:(id)arg4;
- (id)constantScalar:(id)arg1 location:(id)arg2;
- (id)constantScalar:(id)arg1 name:(id)arg2 location:(id)arg3;
- (id)constantTensorBlobWithFilename:(id)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 offset:(id)arg4 location:(id)arg5;
- (id)constantTensorBlobWithFilename:(id)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 offset:(id)arg4 name:(id)arg5 location:(id)arg6;
- (id)constantTensorWithBytes:(void*)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 location:(id)arg4;
- (id)constantTensorWithBytes:(void*)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 name:(id)arg4 location:(id)arg5;
- (id)constantTensorWithScalars:(id)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 location:(id)arg4;
- (id)constantTensorWithScalars:(id)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 name:(id)arg4 location:(id)arg5;
- (id)constantValue:(id)arg1 name:(id)arg2 location:(id)arg3;
- (id)context;
- (id)function;
- (id)initWithName:(id)arg1 context:(id)arg2 location:(id)arg3;
- (bool)isUniqueOutputName:(id)arg1;
- (id)location;
- (struct unique_ptr<MIL::IRArgument, std::default_delete<MIL::IRArgument>> { struct __compressed_pair<MIL::IRArgument *, std::default_delete<MIL::IRArgument>> { struct IRArgument {} *x_1_1_1; } x1; })milArgumentForSNNMILValue:(id)arg1;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })milName;
- (id)name;
- (id)nextSymbol;
- (id)outputNames;
- (id)outputsByApplyingOperatorNamed:(id)arg1 toInputs:(id)arg2 outputs:(id)arg3 attributes:(id)arg4 location:(id)arg5;
- (id)outputsByApplyingOperatorNamed:(id)arg1 toInputs:(id)arg2 outputs:(id)arg3 location:(id)arg4;
- (id)placeholderWithShape:(id)arg1 dataType:(unsigned long long)arg2 location:(id)arg3;
- (id)placeholderWithShape:(id)arg1 dataType:(unsigned long long)arg2 name:(id)arg3 location:(id)arg4;
- (bool)retainOutputs:(id)arg1;
- (bool)retainOutputsWithNames:(id)arg1;
- (void)setOutputNames:(id)arg1;
- (const struct IRTensorValueType { int (**x1)(); }*)tensorValueTypeWithShape:(id)arg1 dataType:(unsigned long long)arg2;

@end
