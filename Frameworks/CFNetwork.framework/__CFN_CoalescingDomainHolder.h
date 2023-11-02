
@interface __CFN_CoalescingDomainHolder : NSObject {
    struct CoalescingDomain { 
        struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { 
            struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _DNS; 
        struct map<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>> { 
            struct __tree<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _ipAddressToConnectionKey; 
        struct map<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>, CoalescingConnectionKeyComparator, std::allocator<std::pair<const std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> { 
            struct __tree<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator>, std::allocator<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _connectionKeyToAllIPAddresses; 
        struct map<std::string, std::shared_ptr<__CoalescingConnectionKey>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<__CoalescingConnectionKey>>>> { 
            struct __tree<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _requestHostToConnectionKey; 
        struct map<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>, CoalescingConnectionKeyComparator, std::allocator<std::pair<const std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> { 
            struct __tree<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator>, std::allocator<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _connectionKeyToAllRequestHosts; 
    }  _coalescingDomain;
    __CFN_PathPolicyManager * _pathPolicyManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
