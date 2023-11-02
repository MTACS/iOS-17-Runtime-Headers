
@interface PVLivePlayerThermalThrottlingPolicy : NSObject {
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _lock;
    struct map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::less<PVSPI_OSThermalPressureLevel>, std::allocator<std::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> { 
        struct __tree<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>>, std::allocator<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _policy;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)controlParametersForThermalLevel:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)populatedControlParametersForCurrentThermalLevel;
- (id)populatedControlParametersForThermalLevel:(int)arg1;
- (void)setThermalLevel:(int)arg1 controlParameters:(id)arg2;

@end
