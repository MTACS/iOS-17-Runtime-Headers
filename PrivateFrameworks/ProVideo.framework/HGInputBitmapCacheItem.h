
@interface HGInputBitmapCacheItem : NSObject {
    struct vector<HGRef<HGBitmap>, std::allocator<HGRef<HGBitmap>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<HGRef<HGBitmap> *, std::allocator<HGRef<HGBitmap>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _bitmaps;
    PVColorSpace * _colorSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullSize;
    struct HGRef<HGBitmap> { 
        struct HGBitmap {} *m_Obj; 
    }  _gainMap;
    NSDate * _lastUsedTime;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<HGRef<HGBitmap>' */ struct  bitmaps; /* unknown property attribute:  std::allocator<HGRef<HGBitmap>>>=^v}} */
@property (nonatomic, readonly) PVColorSpace *colorSpace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullSize;
@property (nonatomic, readonly) struct HGRef<HGBitmap> { struct HGBitmap {} *x1; } gainMap;
@property (nonatomic, readonly) NSDate *lastUsedTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<HGRef<HGBitmap>, std::allocator<HGRef<HGBitmap>>> { void *x1; void *x2; struct __compressed_pair<HGRef<HGBitmap> *, std::allocator<HGRef<HGBitmap>>> { void *x_3_1_1; } x3; })bitmaps;
- (id)colorSpace;
- (struct CGSize { double x1; double x2; })fullSize;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })gainMap;
- (id)initWithHGBitmap:(void*)arg1 fullSize:(struct CGSize { double x1; double x2; })arg2 colorSpace:(id)arg3 gainMap:(struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })arg4;
- (id)lastUsedTime;
- (void)updateLastUsedTime;

@end
