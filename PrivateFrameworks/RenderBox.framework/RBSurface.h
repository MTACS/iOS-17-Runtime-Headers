
@interface RBSurface : NSObject {
    struct { 
        float red; 
        float green; 
        float blue; 
        float alpha; 
    }  _clearColor;
    bool  _clearsBackground;
    int  _colorMode;
    struct objc_ptr<id<MTLDevice>> { 
        <MTLDevice> *_p; 
    }  _device;
    struct Bounds { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*origin; 
    }  _dirty;
    struct objc_ptr<RBDisplayList *> { 
        RBDisplayList *_p; 
    }  _displayList;
    struct refcounted_ptr<RB::Drawable> { 
        struct Drawable {} *_p; 
    }  _drawable;
    void * _lastItem;
    bool  _opaque;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct refcounted_ptr<RB::Texture> { 
        struct Texture {} *_p; 
    }  _texture;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } clearColor;
@property (nonatomic) bool clearsBackground;
@property (nonatomic) int colorMode;
@property (nonatomic, retain) RBDisplayList *displayList;
@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { float x1; float x2; float x3; float x4; })clearColor;
- (bool)clearsBackground;
- (int)colorMode;
- (struct CGImage { }*)copyCGImageUsingDevice:(id)arg1;
- (void)dealloc;
- (id)displayList;
- (id)init;
- (void)invalidate;
- (bool)isOpaque;
- (double)scale;
- (void)setClearColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setClearsBackground:(bool)arg1;
- (void)setColorMode:(int)arg1;
- (void)setDisplayList:(id)arg1;
- (void)setDisplayList:(id)arg1 dirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setOpaque:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)updateUsingDevice:(id)arg1;

@end
