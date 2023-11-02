
@interface RBSymbolShapeLayer : CAShapeLayer {
    struct path_ptr { 
        struct RBPath { 
            void *info; 
            struct RBPathCallbacks {} *callbacks; 
        } _p; 
    }  _rbPath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLayer:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;

@end
