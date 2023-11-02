
@interface RSOpeningHeightAlignment : NSObject {
    struct OpeningHeightAlignment { 
        int (**_vptr$OpeningHeightAlignment)(); 
        struct unordered_map<std::string, rs_oalign::OpeningFixedNode, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, rs_oalign::OpeningFixedNode>>> { 
            struct __hash_table<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, std::hash<std::string>, std::equal_to<std::string>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, rs_oalign::OpeningFixedNode>, std::equal_to<std::string>, std::hash<std::string>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _opening_fixed; 
        bool _check_in_view; 
        float _floor_v; 
        float Min_Opening_height; 
        float Invaid_height_min; 
        int Max_try_times; 
        int Second_try_times; 
        float Max_opeing_height; 
        double opening_wall_gap; 
        struct vector<rs_oalign::HoleOpening, std::allocator<rs_oalign::HoleOpening>> { 
            struct HoleOpening {} *__begin_; 
            struct HoleOpening {} *__end_; 
            struct __compressed_pair<rs_oalign::HoleOpening *, std::allocator<rs_oalign::HoleOpening>> { 
                struct HoleOpening {} *__value_; 
            } __end_cap_; 
        } _hole_vector; 
    }  _openingHeightAlignment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
