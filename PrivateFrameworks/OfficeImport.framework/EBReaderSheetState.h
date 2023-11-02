
@interface EBReaderSheetState : NSObject {
    unsigned long long  mChartIndex;
    EDSheet * mEDSheet;
    EBReaderState * mReaderState;
    struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> { 
        struct __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>>, std::allocator<std::__value_type<int, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mSharedFormulas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)edSheet;
- (id)initWithReaderState:(id)arg1;
- (unsigned long long)nextChartIndex;
- (id)readerState;
- (void)reportWorksheetWarning:(id)arg1;
- (id)resources;
- (void)setEDSheet:(id)arg1;
- (void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2;
- (unsigned long long)sharedFormulaIndexForRowCol:(int)arg1;
- (id)workbook;
- (void*)xlReader;

@end
