
@protocol QLItemThumbnailGeneratorProtocol <NSObject>

@required

- (void)generateThumbnailForItem:(void *)arg1 ofSize:(void *)arg2 minimumSize:(void *)arg3 scale:(void *)arg4 badgeType:(void *)arg5 completionBlock:(void *)arg6; // needs 6 arg types, found 11: QLItem *, struct CGSize { double x1; double x2; }, double, double, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)generateThumbnailRepresentationForItem:(void *)arg1 ofSize:(void *)arg2 minimumSize:(void *)arg3 scale:(void *)arg4 badgeType:(void *)arg5 completionBlock:(void *)arg6; // needs 6 arg types, found 11: QLItem *, struct CGSize { double x1; double x2; }, double, double, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, QLThumbnailRepresentation *, void*
- (void)generateThumbnailRepresentationForItem:(void *)arg1 ofSize:(void *)arg2 minimumSize:(void *)arg3 scale:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 10: QLItem *, struct CGSize { double x1; double x2; }, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, QLThumbnailRepresentation *, void*

@end
