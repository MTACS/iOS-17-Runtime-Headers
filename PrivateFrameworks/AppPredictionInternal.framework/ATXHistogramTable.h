
@interface ATXHistogramTable : NSObject <NSSecureCoding> {
    long long  _blobType;
    _ATXDataStore * _datastore;
    struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>>>="__ptr_"{__compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>>>="__value_"^v {}  _guardedData;
    struct HTGuardedData { 
        NSMutableDictionary *dict; 
        NSMutableIndexSet *usedIds; 
        NSObject<NSCopying> *prevKey; 
        unsigned short prevEventId; 
    }  _private_unsafeGuardedData;
    ATXBackgroundSaver * _saver;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allKeys;
- (id)allKeysFilteredBy:(id /* block */)arg1;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (void)flush;
- (id)histogramTableDict;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatastore:(id)arg1;
- (id)initWithDatastore:(id)arg1 blobType:(long long)arg2;
- (id)initWithDict:(id)arg1 usedIds:(id)arg2 datastore:(id)arg3 blobType:(long long)arg4;
- (unsigned short)intern:(id)arg1;
- (bool)lookup:(id)arg1 into:(unsigned short*)arg2;
- (unsigned short)remove:(id)arg1;

@end
