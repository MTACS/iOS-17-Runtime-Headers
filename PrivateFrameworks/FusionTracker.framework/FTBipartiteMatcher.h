
@interface FTBipartiteMatcher : NSObject {
    struct unique_ptr<ft::HungarianMatcher, std::default_delete<ft::HungarianMatcher>> { 
        struct __compressed_pair<ft::HungarianMatcher *, std::default_delete<ft::HungarianMatcher>> { 
            struct HungarianMatcher {} *__value_; 
        } __ptr_; 
    }  _optimizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeMatchingForCostMatrix:(const float*)arg1 withRowCount:(unsigned long long)arg2 columnCount:(unsigned long long)arg3;
- (id)init;
- (id)initWithInitialSize:(unsigned long long)arg1;

@end
