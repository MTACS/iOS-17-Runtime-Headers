
@interface CNUIPRLikenessPhotoProvider : NSObject <CNUIPRLikenessProvider> {
    CNCache * _cache;
    NSString * _likenessFingerprint;
    NSData * _originalPhotoData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *likenessFingerprint;
@property (nonatomic, readonly) NSData *originalPhotoData;
@property (readonly) Class superclass;

+ (struct CGImage { }*)cgImageFromData:(id)arg1;
+ (struct CGImage { }*)cgThumbnailFromData:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (struct CGImage { }*)_cnui_circularImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGImage { }*)_cnui_image;
- (struct CGImage { }*)_cnui_imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage { }*)_cnui_roundedRectImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithPhotoData:(id)arg1 fingerprint:(id)arg2;
- (id)likenessFingerprint;
- (id)originalPhotoData;

@end
