
@interface MPModelStoreBrowseSectionUniformContentItemTypeResolver : NSObject {
    struct map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::less<MPModelStoreBrowseDetailedContentItemType>, std::allocator<std::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long>>> { 
        struct __tree<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>>, std::allocator<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _contentItemTypeOccurrences;
    bool  _hasValidUniformContentItemType;
    unsigned long long  _totalNumberOfOccurrences;
    long long  _uniformContentItemType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addContentItemType:(long long)arg1;
- (long long)uniformContentItemType;

@end
