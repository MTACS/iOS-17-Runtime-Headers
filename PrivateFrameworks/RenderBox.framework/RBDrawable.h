
@interface RBDrawable : NSObject <RBDrawableStatistics, _RBDrawableDelegate> {
    struct { 
        float red; 
        float green; 
        float blue; 
        float alpha; 
    }  _clearColor;
    <RBDrawableDelegate> * _delegate;
    struct objc_ptr<RBDevice *> { 
        RBDevice *_p; 
    }  _device;
    struct refcounted_ptr<RB::Drawable> { 
        struct Drawable {} *_p; 
    }  _drawable;
    struct objc_ptr<id<MTLEvent>> { 
        <MTLEvent> *_p; 
    }  _event;
    unsigned long long  _eventValue;
    int  _initialState;
    unsigned long long  _pixelFormat;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)>="_p"@? {}  _statistics_handler;
    struct spin_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _statistics_handler_lock;
    struct objc_ptr<id<MTLTexture>> { 
        <MTLTexture> *_p; 
    }  _texture;
}

@property (nonatomic, readonly) double GPUDuration;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } clearColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RBDrawableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RBDevice *device;
@property (nonatomic, retain) <MTLEvent> *event;
@property (nonatomic) unsigned long long eventValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) int initialState;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly, copy) NSDictionary *statistics;
@property (nonatomic, copy) id /* block */ statisticsHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MTLTexture> *texture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)GPUDuration;
- (void)_RBDrawableStatisticsDidChange;
- (struct { float x1; float x2; float x3; float x4; })clearColor;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (void)dumpTexture:(id)arg1 name:(id)arg2;
- (id)event;
- (unsigned long long)eventValue;
- (void)finish;
- (id)initWithDevice:(id)arg1;
- (int)initialState;
- (unsigned long long)pixelFormat;
- (void)renderDisplayList:(id)arg1 flags:(unsigned int)arg2;
- (void)renderDisplayList:(id)arg1 sourceRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 destinationOffset:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 flags:(unsigned int)arg4;
- (void)renderItems:(id)arg1 flags:(unsigned int)arg2;
- (void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;
- (double)scale;
- (void)setClearColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventValue:(unsigned long long)arg1;
- (void)setInitialState:(int)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStatisticsHandler:(id /* block */)arg1;
- (void)setTexture:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)statistics;
- (id /* block */)statisticsHandler;
- (id)texture;

@end
