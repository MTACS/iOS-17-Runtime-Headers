
@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_generateThumbnailForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 minimumDimension:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (void)_generateThumbnailWithFPItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumDimension:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (void)_generateThumbnailWithURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumDimension:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (id)fetcherClassesForPreviewItem:(id)arg1;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (void)generateThumbnailRepresentationForItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (void)generateThumbnailRepresentationForItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(id /* block */)arg5;

@end
