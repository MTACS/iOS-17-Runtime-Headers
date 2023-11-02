
@interface _UIDragSessionProperties : NSObject {
    bool  __avoidsKeyboardSuppression;
    struct CGSize { 
        double width; 
        double height; 
    }  __maximumResizableSize;
    struct CGSize { 
        double width; 
        double height; 
    }  __minimumResizableSize;
    bool  __resizable;
    bool  __rotatable;
    bool  __wantsElasticEffects;
    bool  _supportsSystemDrag;
}

@property (nonatomic) bool _avoidsKeyboardSuppression;
@property (nonatomic) struct CGSize { double x1; double x2; } _maximumResizableSize;
@property (nonatomic) struct CGSize { double x1; double x2; } _minimumResizableSize;
@property (nonatomic) bool _resizable;
@property (nonatomic) bool _rotatable;
@property (nonatomic) bool _supportsSystemDrag;
@property (nonatomic) bool _wantsElasticEffects;

- (bool)_avoidsKeyboardSuppression;
- (struct CGSize { double x1; double x2; })_maximumResizableSize;
- (struct CGSize { double x1; double x2; })_minimumResizableSize;
- (bool)_resizable;
- (bool)_rotatable;
- (bool)_supportsSystemDrag;
- (bool)_wantsElasticEffects;
- (id)init;
- (void)set_avoidsKeyboardSuppression:(bool)arg1;
- (void)set_maximumResizableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_minimumResizableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_resizable:(bool)arg1;
- (void)set_rotatable:(bool)arg1;
- (void)set_supportsSystemDrag:(bool)arg1;
- (void)set_wantsElasticEffects:(bool)arg1;

@end
