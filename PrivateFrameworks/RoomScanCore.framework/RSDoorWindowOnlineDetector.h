
@interface RSDoorWindowOnlineDetector : NSObject {
    RSOrthographicDetector * _doorWindowDetector;
    struct MergerForDoorWindow { 
        int (**_vptr$MergerForDoorWindow)(); 
        NSMutableArray *_new_instances; 
        NSArray *_target_infer_walls_openings; 
        NSArray *_new_walls_openings; 
        NSMutableArray *_merged_instances; 
        NSMutableArray *_prev_instances; 
        NSMutableArray *_prev_instances_on_infer_walls_openings; 
        NSMutableArray *_prev_instances_to_keep; 
    }  _merger_for_close_door_window;
    struct MergerForDoorWindow { 
        int (**_vptr$MergerForDoorWindow)(); 
        NSMutableArray *_new_instances; 
        NSArray *_target_infer_walls_openings; 
        NSArray *_new_walls_openings; 
        NSMutableArray *_merged_instances; 
        NSMutableArray *_prev_instances; 
        NSMutableArray *_prev_instances_on_infer_walls_openings; 
        NSMutableArray *_prev_instances_to_keep; 
    }  _merger_for_open_door;
    struct WallOpeningSelectorForDoorWindow { 
        int (**_vptr$WallOpeningSelectorForDoorWindow)(); 
        NSMutableArray *_infer_wall_openings; 
        struct vector<wlw_olp::WallOpeningAttribute, std::allocator<wlw_olp::WallOpeningAttribute>> { 
            struct WallOpeningAttribute {} *__begin_; 
            struct WallOpeningAttribute {} *__end_; 
            struct __compressed_pair<wlw_olp::WallOpeningAttribute *, std::allocator<wlw_olp::WallOpeningAttribute>> { 
                struct WallOpeningAttribute {} *__value_; 
            } __end_cap_; 
        } _infer_wall_openings_attributes; 
        NSMutableArray *_target_infer_wall_openings; 
        struct vector<wlw_olp::WallOpeningAttribute, std::allocator<wlw_olp::WallOpeningAttribute>> { 
            struct WallOpeningAttribute {} *__begin_; 
            struct WallOpeningAttribute {} *__end_; 
            struct __compressed_pair<wlw_olp::WallOpeningAttribute *, std::allocator<wlw_olp::WallOpeningAttribute>> { 
                struct WallOpeningAttribute {} *__value_; 
            } __end_cap_; 
        } _target_infer_wall_openings_attributes; 
        NSArray *_new_wall_openings; 
        <RSKeyframe> *_cur_keyframe; 
        float _floor_height; 
        float _ceiling_height; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void**_convex_hull; 
    }  _open_selector_for_door_window;
    struct WallOpeningSelectorForDoorWindow { 
        int (**_vptr$WallOpeningSelectorForDoorWindow)(); 
        NSMutableArray *_infer_wall_openings; 
        struct vector<wlw_olp::WallOpeningAttribute, std::allocator<wlw_olp::WallOpeningAttribute>> { 
            struct WallOpeningAttribute {} *__begin_; 
            struct WallOpeningAttribute {} *__end_; 
            struct __compressed_pair<wlw_olp::WallOpeningAttribute *, std::allocator<wlw_olp::WallOpeningAttribute>> { 
                struct WallOpeningAttribute {} *__value_; 
            } __end_cap_; 
        } _infer_wall_openings_attributes; 
        NSMutableArray *_target_infer_wall_openings; 
        struct vector<wlw_olp::WallOpeningAttribute, std::allocator<wlw_olp::WallOpeningAttribute>> { 
            struct WallOpeningAttribute {} *__begin_; 
            struct WallOpeningAttribute {} *__end_; 
            struct __compressed_pair<wlw_olp::WallOpeningAttribute *, std::allocator<wlw_olp::WallOpeningAttribute>> { 
                struct WallOpeningAttribute {} *__value_; 
            } __end_cap_; 
        } _target_infer_wall_openings_attributes; 
        NSArray *_new_wall_openings; 
        <RSKeyframe> *_cur_keyframe; 
        float _floor_height; 
        float _ceiling_height; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void**_convex_hull; 
    }  _wall_selector_for_door_window;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
