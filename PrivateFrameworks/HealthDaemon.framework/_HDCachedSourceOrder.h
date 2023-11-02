
@interface _HDCachedSourceOrder : NSObject {
    bool  _isDefaultSourceOrder;
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> { 
        struct _HDWrappedSource {} *__begin_; 
        struct _HDWrappedSource {} *__end_; 
        struct __compressed_pair<_HDWrappedSource *, std::allocator<_HDWrappedSource>> { 
            struct _HDWrappedSource {} *__value_; 
        } __end_cap_; 
    }  _orderedSources;
    bool  _userOrdered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
