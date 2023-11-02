
@interface CLPCReportingClient : CLPCUserClient <CLPCReportingAccess> {
    struct unordered_set<CLPCReportingStatID, std::hash<CLPCReportingStatID>, std::equal_to<CLPCReportingStatID>, std::allocator<CLPCReportingStatID>> { 
        struct __hash_table<CLPCReportingStatID, std::hash<CLPCReportingStatID>, std::equal_to<CLPCReportingStatID>, std::allocator<CLPCReportingStatID>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *>, std::allocator<std::__hash_node<CLPCReportingStatID, void *>>> { 
                struct __hash_node_base<std::__hash_node<CLPCReportingStatID, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<CLPCReportingStatID>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<CLPCReportingStatID>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  available_stat_ids;
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  channel_to_cluster_map;
    struct unordered_map<unsigned int, CLPCReportingStatID, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, CLPCReportingStatID>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, CLPCReportingStatID>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, CLPCReportingStatID>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, CLPCReportingStatID>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, CLPCReportingStatID>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, CLPCReportingStatID>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, CLPCReportingStatID>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, CLPCReportingStatID>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  channel_to_stat_map;
    NSArray * compactedSchemas;
    struct vector<CLPCReportingStatID, std::allocator<CLPCReportingStatID>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<CLPCReportingStatID *, std::allocator<CLPCReportingStatID>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  configured_stat_ids;
    unsigned int  num_ane_clusters;
    unsigned int  num_cpu_clusters;
    unsigned int  num_package_zones;
    struct SampleList { 
        NSMutableDictionary *samples; 
    }  prev_sample_list;
    struct ChannelList { 
        NSMutableDictionary *channels; 
    }  reporting_channels;
    struct Subscription { 
        int (**_vptr$Subscription)(); 
        struct __IOReportSubscriptionCF {} *subscription; 
        NSMutableDictionary *subscribed_channels; 
    }  reporting_subscription;
    struct array<std::unordered_map<unsigned long long, unsigned long>, 7UL> { 
        struct unordered_map<unsigned long long, unsigned long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long>>> { 
            struct __hash_table<std::__hash_value_type<unsigned long long, unsigned long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } __elems_[7]; 
    }  schema_column_maps;
    struct array<CLPCReportingSchema *, 7UL> { 
        CLPCReportingSchema *__elems_[7]; 
    }  schemas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)enableStats:(id)arg1 error:(id*)arg2;
- (id)enabledStats;
- (id)init:(id*)arg1;
- (id)readDeltaStats:(id*)arg1;
- (id)readStats:(id*)arg1;
- (unsigned long long)schemaIDForStatID:(unsigned long long)arg1 error:(id*)arg2;
- (id)supportedStats;

@end
