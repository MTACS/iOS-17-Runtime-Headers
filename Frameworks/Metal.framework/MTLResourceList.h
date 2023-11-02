
@interface MTLResourceList : NSObject {
    unsigned long long  _defaultHashTable;
    unsigned int  _defaultHopInfo;
    unsigned long long  _defaultUsedInfo;
    struct { 
        unsigned int hashSize; 
        unsigned int hashShift; 
        unsigned long long *usedInfo; 
        unsigned int *hopInfo; 
        unsigned long long *hashTable; 
        struct MTLResourceListChunk { 
            unsigned int currentEntry; 
            unsigned long long *entries; 
            struct MTLResourceListChunk {} *nextChunk; 
        } currentChunk; 
        unsigned int chunkEntryCapacity; 
        MTLResourceListPool *pool; 
        struct { 
            MTLResourceList *tqe_next; 
            id *tqe_prev; 
        } entry; 
        unsigned long long time_added; 
    }  _listPriv;
}

- (void)dealloc;
- (id)initWithCapacity:(int)arg1;
- (void)releaseAllObjectsAndReset;

@end
