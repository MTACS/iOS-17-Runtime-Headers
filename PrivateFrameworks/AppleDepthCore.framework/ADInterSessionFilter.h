
@interface ADInterSessionFilter : NSObject {
    NSArray * _elementsNames;
    struct deque<Node *, std::allocator<Node *>> { 
        struct __split_buffer<Node **, std::allocator<Node **>> { 
            struct Node {} ***__first_; 
            struct Node {} ***__begin_; 
            struct Node {} ***__end_; 
            struct __compressed_pair<Node ***, std::allocator<Node **>> { 
                struct Node {} ***__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<Node *>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _nodes;
    ADInterSessionFilterParameters * _params;
    struct map<std::string, std::multiset<Element *, Element::ElementCompare> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::multiset<Element *, Element::ElementCompare> *>>> { 
        struct __tree<std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sets;
    double * _sumOfWeights;
    unsigned int  _version;
    double * _weightedAverage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)L2FromIndex:(unsigned int)arg1 ToIndex:(unsigned int)arg2 ByElement:(unsigned int)arg3 WithMean:(double)arg4;
- (double)LossFromIndex:(unsigned int)arg1 ToIndex:(unsigned int)arg2;
- (double)SLFromIndex:(unsigned int)arg1;
- (double)TTESTWithCandidate:(unsigned int)arg1 ByElement:(unsigned int)arg2;
- (bool)TtestStepWithCandidate:(unsigned int)arg1;
- (double)V1FromIndex:(unsigned int)arg1 ToIndex:(unsigned int)arg2;
- (double)V2FromIndex:(unsigned int)arg1 ToIndex:(unsigned int)arg2;
- (id)calculate;
- (id)calculateInterSessionFilterResultFromIndex:(unsigned int)arg1;
- (void)dealloc;
- (long long)fillWithDictionaryRepresentation:(id)arg1;
- (long long)fillWithEntry:(id)arg1;
- (id)initWithFieldNames:(id)arg1 parameters:(id)arg2;
- (long long)insertEntry:(id)arg1 withWeight:(double)arg2;
- (id)insertEntryAndCalculate:(id)arg1 withWeight:(double)arg2;
- (unsigned int)kIndexCandidate;
- (void)markInStep:(unsigned int)arg1;
- (long long)markOutliers:(unsigned int)arg1;
- (id)persistenceData;
- (void)resetElementFlags:(void*)arg1;
- (double)samplesMeanFromIndex:(unsigned int)arg1 ToIndex:(unsigned int)arg2 ByElement:(unsigned int)arg3;
- (double)samplesVarianceFromIndex:(unsigned int)arg1 ToIndex:(unsigned int)arg2 ByElement:(unsigned int)arg3 WithMean:(double)arg4;
- (void)setOnlineWeights:(unsigned int)arg1;
- (double)sigmaSWithCandidate:(unsigned int)arg1 ByElement:(unsigned int)arg2;
- (unsigned int)stepDetection;

@end
