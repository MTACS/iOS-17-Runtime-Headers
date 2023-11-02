
@interface GEOAltitudeManifestReserved : NSObject {
    unsigned int  _reservedCurrentRegion;
    geo_isolater * _reservedIsolater;
    unsigned char  _reservedTourServerType;
    struct map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>> { 
        struct __tree<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, _GEOAltitudeTriggerData>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _reservedTriggerData;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
