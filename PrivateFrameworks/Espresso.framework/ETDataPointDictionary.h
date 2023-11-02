
@interface ETDataPointDictionary : NSObject {
    struct map<std::string, float_buffer_t, std::less<std::string>, std::allocator<std::pair<const std::string, float_buffer_t>>> { 
        struct __tree<std::__value_type<std::string, float_buffer_t>, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>>, std::allocator<std::__value_type<std::string, float_buffer_t>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float_buffer_t>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _float_buffers;
    struct map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> { 
        struct __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _image_buffers;
}

@property /* Warning: unhandled struct encoding: '{map<std::string' */ struct  float_buffers; /* unknown property attribute:  std::less<std::string>>>=Q}}} */
@property /* Warning: unhandled struct encoding: '{map<std::string' */ struct  image_buffers; /* unknown property attribute:  std::less<std::string>>>=Q}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataArrayForKey:(id)arg1 error:(id*)arg2;
- (float*)dataForKey:(id)arg1 error:(id*)arg2;
- (struct map<std::string, float_buffer_t, std::less<std::string>, std::allocator<std::pair<const std::string, float_buffer_t>>> { struct __tree<std::__value_type<std::string, float_buffer_t>, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>>, std::allocator<std::__value_type<std::string, float_buffer_t>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float_buffer_t>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })float_buffers;
- (struct map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> { struct __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })image_buffers;
- (bool)setData:(float*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(bool)arg4;
- (void)setFloat_buffers:(struct map<std::string, float_buffer_t, std::less<std::string>, std::allocator<std::pair<const std::string, float_buffer_t>>> { struct __tree<std::__value_type<std::string, float_buffer_t>, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>>, std::allocator<std::__value_type<std::string, float_buffer_t>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float_buffer_t>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (bool)setImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 forKey:(id)arg2;
- (void)setImage_buffers:(struct map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> { struct __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;

@end
