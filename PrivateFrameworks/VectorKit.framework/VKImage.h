
@interface VKImage : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collisionRect;
    NSData * _data;
    void * _gglTexture;
    bool  _hasAnchorPoint;
    bool  _hasCollisionRect;
    bool  _hasLabelingPoint;
    unsigned char  _imageHash;
    struct CGImage { } * _imageRef;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _isImageReady;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _isTextureReady;
    struct CGPoint { 
        double x; 
        double y; 
    }  _labelingPoint;
    NSString * _name;
    VKResourceManager * _resourceManager;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct shared_ptr<md::TextureAtlasRegion> { 
        struct TextureAtlasRegion {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _textureAtlasRegion;
    struct Box<float, 2> { 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } _minimum; 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } _maximum; 
    }  _textureCoordinates;
    bool  _usedAsTextureAndImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_prepareImage;
- (void)_prepareTextureWithAtlas:(struct TextureAtlas { int (**x1)(); }*)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collisionRect;
- (int)compareTo:(id)arg1;
- (void)dealloc;
- (void*)gglTexture;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 usedAsTextureAndImage:(bool)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2 usedAsTextureAndImage:(bool)arg3;
- (id)initWithName:(id)arg1 scale:(double)arg2 resourceManager:(id)arg3;
- (struct CGPoint { double x1; double x2; })labelingPoint;
- (void)prepareTextureWithAtlas:(struct TextureAtlas { int (**x1)(); }*)arg1;
- (double)scale;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCollisionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (const void*)textureCoordinates;

@end
