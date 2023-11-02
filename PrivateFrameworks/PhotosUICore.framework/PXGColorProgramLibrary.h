
@interface PXGColorProgramLibrary : NSObject {
    struct CGColorSpace { } * _destinationColorSpace;
    NSMutableSet * _failedColorspaces;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PXGMetalRenderContext * _metalRenderContext;
    NSMutableArray * _programs;
}

@property (nonatomic, readonly) struct CGColorSpace { }*destinationColorSpace;
@property (nonatomic, readonly) PXGMetalRenderContext *metalRenderContext;

- (void).cxx_destruct;
- (id)colorProgramForSourceColorSpace:(struct CGColorSpace { }*)arg1 flags:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (struct CGColorSpace { }*)destinationColorSpace;
- (id)init;
- (id)initWithContext:(id)arg1 destinationColorSpace:(struct CGColorSpace { }*)arg2;
- (id)metalRenderContext;

@end
