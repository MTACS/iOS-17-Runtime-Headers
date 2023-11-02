
@interface RSRoomTypeGenerator : NSObject {
    struct RoomTypeConfig { 
        unsigned long long img_sz; 
        float pixel_sz; 
        unsigned long long input_channel; 
        unsigned long long z_slice; 
        bool dynamic_pixel_sz; 
        struct vector<std::string, std::allocator<std::string>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                void *__value_; 
            } __end_cap_; 
        } model_input_names; 
        struct vector<roomscancore::roomtype_v4::RoomTypeCategory, std::allocator<roomscancore::roomtype_v4::RoomTypeCategory>> { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<roomscancore::roomtype_v4::RoomTypeCategory *, std::allocator<roomscancore::roomtype_v4::RoomTypeCategory>> { 
                int *__value_; 
            } __end_cap_; 
        } model_output_categories; 
        struct vector<std::string, std::allocator<std::string>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                void *__value_; 
            } __end_cap_; 
        } model_output_names; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } model_name; 
        struct vector<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                unsigned long long *__value_; 
            } __end_cap_; 
        } model_input_shape; 
        struct vector<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                unsigned long long *__value_; 
            } __end_cap_; 
        } model_output_shape; 
        struct unordered_map<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::allocator<std::pair<const roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>>> { 
            struct __hash_table<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>, std::allocator<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } area_thr; 
        struct unordered_map<roomscancore::roomtype_v4::RoomTypeCategory, float, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::allocator<std::pair<const roomscancore::roomtype_v4::RoomTypeCategory, float>>> { 
            struct __hash_table<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>, std::allocator<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } score_thr; 
        struct unordered_map<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::allocator<std::pair<const roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>>> { 
            struct __hash_table<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>, std::allocator<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } obj_config; 
    }  _cfg;
    struct RoomTypeDetector { 
        struct IEspresso_Interface_v1 { 
            int (**_vptr$IEspresso_Interface_v1)(); 
            struct map<std::string, espresso_buffer_t *, std::less<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t *>>> { 
                struct __tree<std::__value_type<std::string, espresso_buffer_t *>, std::__map_value_compare<std::string, std::__value_type<std::string, espresso_buffer_t *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, espresso_buffer_t *>>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, espresso_buffer_t *>, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, espresso_buffer_t *>, std::less<std::string>>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } _output_tensor; 
            void *_ctx; 
            void *_plan; 
            struct { 
                void *plan; 
                int network_index; 
            } _net; 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } _previous_mode; 
            bool _single_resolution; 
        } model_; 
        struct RoomTypeConfig { 
            unsigned long long img_sz; 
            float pixel_sz; 
            unsigned long long input_channel; 
            unsigned long long z_slice; 
            bool dynamic_pixel_sz; 
            struct vector<std::string, std::allocator<std::string>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                    void *__value_; 
                } __end_cap_; 
            } model_input_names; 
            struct vector<roomscancore::roomtype_v4::RoomTypeCategory, std::allocator<roomscancore::roomtype_v4::RoomTypeCategory>> { 
                int *__begin_; 
                int *__end_; 
                struct __compressed_pair<roomscancore::roomtype_v4::RoomTypeCategory *, std::allocator<roomscancore::roomtype_v4::RoomTypeCategory>> { 
                    int *__value_; 
                } __end_cap_; 
            } model_output_categories; 
            struct vector<std::string, std::allocator<std::string>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                    void *__value_; 
                } __end_cap_; 
            } model_output_names; 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } model_name; 
            struct vector<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long *__begin_; 
                unsigned long long *__end_; 
                struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                    unsigned long long *__value_; 
                } __end_cap_; 
            } model_input_shape; 
            struct vector<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long *__begin_; 
                unsigned long long *__end_; 
                struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                    unsigned long long *__value_; 
                } __end_cap_; 
            } model_output_shape; 
            struct unordered_map<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::allocator<std::pair<const roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>>> { 
                struct __hash_table<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>, std::allocator<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>>> { 
                    struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>>> { 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>>> { 
                            void **__value_; 
                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>> { 
                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> *>> { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *>>> { 
                        struct __hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, void *> *> { 
                            void *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, unsigned long>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } area_thr; 
            struct unordered_map<roomscancore::roomtype_v4::RoomTypeCategory, float, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::allocator<std::pair<const roomscancore::roomtype_v4::RoomTypeCategory, float>>> { 
                struct __hash_table<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>, std::allocator<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>>> { 
                    struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>>> { 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>>> { 
                            void **__value_; 
                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>> { 
                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> *>> { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *>>> { 
                        struct __hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, void *> *> { 
                            void *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, float>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } score_thr; 
            struct unordered_map<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::allocator<std::pair<const roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>>> { 
                struct __hash_table<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>, std::allocator<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>>> { 
                    struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>>> { 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>>> { 
                            void **__value_; 
                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>> { 
                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> *>> { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *>>> { 
                        struct __hash_node_base<std::__hash_node<std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, void *> *> { 
                            void *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__unordered_map_hasher<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__unordered_map_equal<roomscancore::roomtype_v4::RoomTypeCategory, std::__hash_value_type<roomscancore::roomtype_v4::RoomTypeCategory, roomscancore::roomtype_v4::RoomObjectConstraint>, std::equal_to<roomscancore::roomtype_v4::RoomTypeCategory>, std::hash<roomscancore::roomtype_v4::RoomTypeCategory>>> { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } obj_config; 
        } cfg_; 
    }  _detector;
    RSOfflineGeometryCalculation * _geoEstimator;
    RSSemanticImage * _inputImage;
    struct OBBDetector { 
        struct optional<float __attribute__((ext_vector_type(2)))>=""(?="__null_state_"c"__val_")"__engaged_"B {} _prev_main_vec; 
    }  _obb_detector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
