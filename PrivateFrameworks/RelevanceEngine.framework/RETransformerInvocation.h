
@interface RETransformerInvocation : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _values;
}

@property (nonatomic, readonly) unsigned long long numberOfArguments;

+ (id)invocationWithArguments:(unsigned long long*)arg1 count:(unsigned long long)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)getArgumentAtIndex:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)numberOfArguments;
- (void)setArgument:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end
