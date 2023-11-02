
@interface PKStrokeRenderMask : NSObject <NSCopying> {
    struct vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<ClipperLib::IntPoint> *, std::allocator<std::vector<ClipperLib::IntPoint>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _maskPaths;
    <PKStrokeRenderCache> * _renderCache;
    PKStroke * _stroke;
}

@property (nonatomic, readonly) <PKStrokeRenderCache> *renderCache;
@property (nonatomic, readonly) PKStroke *stroke;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithStroke:(id)arg1 renderCache:(id)arg2 maskPaths:(const void*)arg3;
- (const void*)maskPaths;
- (id)renderCache;
- (id)stroke;

@end
