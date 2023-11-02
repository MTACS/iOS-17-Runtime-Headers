
@interface PXGThumbnailRequestQueue : NSObject {
    long long  _capacity;
    long long  _count;
    struct PXGThumbnailRequest { void *x1; void *x2; unsigned long long x3; unsigned int x4; unsigned short x5; unsigned short x6; float x7; } * _requests;
}

@property (nonatomic) long long count;
@property (nonatomic, readonly) struct PXGThumbnailRequest { void *x1; void *x2; unsigned long long x3; unsigned int x4; unsigned short x5; unsigned short x6; float x7; }*requests;

- (long long)count;
- (void)dealloc;
- (id)description;
- (void)enqueueRequestsWithItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textureRequestIDs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 displayAssetFetchResult:(id)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 applyCleanApertureCrop:(bool)arg5 mediaProvider:(id)arg6;
- (id)init;
- (void)removeAllRequests;
- (struct PXGThumbnailRequest { void *x1; void *x2; unsigned long long x3; unsigned int x4; unsigned short x5; unsigned short x6; float x7; }*)requests;
- (void)setCount:(long long)arg1;
- (void)sortRequests;

@end
