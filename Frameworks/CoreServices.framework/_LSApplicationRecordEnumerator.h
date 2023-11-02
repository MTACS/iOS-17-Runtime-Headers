
@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {
    unsigned int  _bundleClass;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _bundleIdentifiersOrUnits;
    unsigned int  _container;
    unsigned long long  _options;
    NSURL * _volumeURL;
}

@property unsigned int bundleClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_applicationRecordWithContext:(struct LSContext { id x1; }*)arg1 bundleIdentifierOrUnit:(unsigned int)arg2;
- (bool)_enumerateAllBundles;
- (bool)_getContainer:(unsigned int*)arg1 context:(struct LSContext { id x1; }*)arg2 error:(id*)arg3;
- (bool)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext { id x1; }*)arg3;
- (bool)_prepareWithContext:(struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (unsigned int)bundleClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContext:(struct LSContext { id x1; }*)arg1 volumeURL:(id)arg2 options:(unsigned long long)arg3;
- (void)setBundleClass:(unsigned int)arg1;

@end
