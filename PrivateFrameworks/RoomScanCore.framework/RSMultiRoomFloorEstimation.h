
@interface RSMultiRoomFloorEstimation : NSObject {
    struct OBBDetector { 
        struct optional<float __attribute__((ext_vector_type(2)))>=""(?="__null_state_"c"__val_")"__engaged_"B {} _prev_main_vec; 
    }  _obb_detector;
    struct PerimeterDetector { }  _perimeter_detector;
    NSUUID * _uuid;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
