
@interface _WKWebsiteDataSize : NSObject {
    struct Size { 
        unsigned long long totalSize; 
        struct HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits> { 
            struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> { 
                union { 
                    void *m_table; 
                    unsigned int *m_tableForLLDB; 
                } ; 
            } m_impl; 
        } typeSizes; 
    }  _size;
}

@property (nonatomic, readonly) unsigned long long totalSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSize:(const void*)arg1;
- (unsigned long long)sizeOfDataTypes:(id)arg1;
- (unsigned long long)totalSize;

@end
