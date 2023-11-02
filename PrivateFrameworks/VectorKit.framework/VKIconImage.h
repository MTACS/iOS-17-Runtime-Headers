
@interface VKIconImage : NSObject {
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGColor {} *_obj; 
        struct _retain_cf<CGColor *> { } _retain; 
        struct _release_cf { } _release; 
    }  _calloutFillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGColor {} *_obj; 
        struct _retain_cf<CGColor *> { } _retain; 
        struct _release_cf { } _release; 
    }  _calloutHaloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGColor {} *_obj; 
        struct _retain_cf<CGColor *> { } _retain; 
        struct _release_cf { } _release; 
    }  _calloutTextColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGColor {} *_obj; 
        struct _retain_cf<CGColor *> { } _retain; 
        struct _release_cf { } _release; 
    }  _fillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGColor {} *_obj; 
        struct _retain_cf<CGColor *> { } _retain; 
        struct _release_cf { } _release; 
    }  _glyphColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGColor {} *_obj; 
        struct _retain_cf<CGColor *> { } _retain; 
        struct _release_cf { } _release; 
    }  _haloColor;
    struct shared_ptr<grl::IconImage> { 
        struct IconImage {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _iconImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGColor { }*)calloutFillColor;
- (struct CGColor { }*)calloutHaloColor;
- (unsigned int)calloutShape;
- (struct CGColor { }*)calloutTextColor;
- (float)contentScale;
- (struct CGColor { }*)fillColor;
- (struct CGColor { }*)glyphColor;
- (struct CGColor { }*)haloColor;
- (struct CGImage { }*)image;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init:(struct shared_ptr<grl::IconImage> { struct IconImage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isBalloonShape;
- (float)opacity;

@end
