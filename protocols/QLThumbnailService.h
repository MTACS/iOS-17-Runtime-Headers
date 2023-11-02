
@protocol QLThumbnailService <NSObject>

@required

- (void)generateThumbnailOfSize:(void *)arg1 minimumSize:(void *)arg2 scale:(void *)arg3 badgeType:(void *)arg4 iconFlavor:(void *)arg5 contentType:(void *)arg6 interpolationQuality:(void *)arg7 wantsLowQuality:(void *)arg8 withContents:(void *)arg9 additionalResourcesWrapper:(void *)arg10 generatorData:(void *)arg11 completionHandler:(void *)arg12; // needs 12 arg types, found 24: struct CGSize { double x1; double x2; }, double, double, unsigned long long, int, NSString *, int, bool, id, id, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, QLURLHandler *, IOSurface *, struct CGSize { double x1; double x2; }, QLTBitmapFormat *, NSDictionary *, bool, NSError *, void*

@end
