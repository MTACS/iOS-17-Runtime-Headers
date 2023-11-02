
@interface _EARLazyDoubleArray : NSArray {
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _vec;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithDoubleVector:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
