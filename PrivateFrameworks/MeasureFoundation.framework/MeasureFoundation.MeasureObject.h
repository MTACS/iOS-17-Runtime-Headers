
@interface MeasureFoundation.MeasureObject : NSObject {
    void $__lazy_storage_$_canHandleTouch;
    void $__lazy_storage_$_clear;
    void $__lazy_storage_$_confirm;
    void $__lazy_storage_$_distanceFromCameraPlane;
    void $__lazy_storage_$_distanceFromReticle;
    void $__lazy_storage_$_importanceWeight;
    void $__lazy_storage_$_isConfirmable;
    void $__lazy_storage_$_percentVisible;
    void $__lazy_storage_$_prepareToclear;
    void $__lazy_storage_$_reconfirm;
    void $__lazy_storage_$_suggest;
    void _state;
    void id;
}

@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
