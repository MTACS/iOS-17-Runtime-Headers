
@protocol TVImageLoader <NSObject>

@required

- (void)cancelLoad:(id)arg1;
- (NSString *)imageKeyForObject:(id)arg1;

@optional

- (NSURL *)URLForObject:(id)arg1;
- (bool)hasImageCache;
- (id)loadImageForObject:(void *)arg1 scaleToSize:(void *)arg2 cropToFit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 13: id, struct CGSize { double x1; double x2; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TVImage *, NSString *, NSDate *, unsigned long long, NSError *, void*
- (id)loadImageForObject:(void *)arg1 scaleToSize:(void *)arg2 cropToFit:(void *)arg3 imageDirection:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 14: id, struct CGSize { double x1; double x2; }, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TVImage *, NSString *, NSDate *, unsigned long long, NSError *, void*
- (id)loadImageForObject:(void *)arg1 scaleToSize:(void *)arg2 cropToFit:(void *)arg3 imageDirection:(void *)arg4 requestLoader:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 15: id, struct CGSize { double x1; double x2; }, bool, long long, <IKNetworkRequestLoader> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TVImage *, NSString *, NSDate *, unsigned long long, NSError *, void*

@end