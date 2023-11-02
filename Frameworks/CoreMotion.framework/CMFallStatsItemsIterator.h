
@interface CMFallStatsItemsIterator : NSObject <NSFastEnumeration> {
    NSData * _data;
    NSDictionary * _item;
    struct ReaderIterator { 
        struct Reader {} *fReader; 
        struct shared_ptr<CMMsl::Item> { 
            struct Item {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } fItem; 
    }  fMslIterator;
    struct Reader { 
        struct Delegate {} *fDelegate; 
        int fFd; 
        unsigned long long fMappedSize; 
        unsigned long long fMappedOffset; 
        char *fMappedData; 
        bool fMustScan; 
        struct z_stream_s { 
            char *next_in; 
            unsigned int avail_in; 
            unsigned long long total_in; 
            char *next_out; 
            unsigned int avail_out; 
            unsigned long long total_out; 
            char *msg; 
            struct internal_state {} *state; 
            int (*zalloc)(); 
            int (*zfree)(); 
            void *opaque; 
            int data_type; 
            unsigned long long adler; 
            unsigned long long reserved; 
        } fZStream; 
        struct vector<unsigned char, std::allocator<unsigned char>> { 
            char *__begin_; 
            char *__end_; 
            struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
                char *__value_; 
            } __end_cap_; 
        } fUncompressedSens; 
        unsigned long long fSensRemaining; 
        char *fSensData; 
    }  fMslReader;
    struct MemoryDelegate { 
        int (**_vptr$Delegate)(); 
        char *fBuffer; 
        unsigned long long fLength; 
    }  fMslReaderDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
