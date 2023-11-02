
@interface ETDataSourceBlobF4 : NSObject <ETDataSource> {
    struct map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { 
        struct __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  blobs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBlob:(id)arg1 forKey:(id)arg2;
- (id)dataPointAtIndex:(int)arg1;
- (int)numberOfDataPoints;

@end
