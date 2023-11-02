
@interface AVTVariantBatchSnapshotter : NSObject {
    unsigned long long  _antialiasingMode;
    AVTAvatar * _avatar;
    AVTRenderer * _renderer;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    AVTSnapshotHelper * _snapshotHelper;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)imageWithOptions:(id)arg1 modifications:(id /* block */)arg2;
- (id)initWithAvatar:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 antialiasingMode:(unsigned long long)arg4 device:(id)arg5;

@end
