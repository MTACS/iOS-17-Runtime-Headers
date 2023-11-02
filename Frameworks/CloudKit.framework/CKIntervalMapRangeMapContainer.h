
@interface CKIntervalMapRangeMapContainer : NSObject {
    struct RangeDataVector<unsigned long, unsigned long, id, 0U, std::less<id>> { 
        struct vector<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>, std::allocator<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id> *, std::allocator<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>>> { 
                void *__value_; 
            } __end_cap_; 
        } m_entries; 
        struct less<id> { } m_compare; 
    }  rangeMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
