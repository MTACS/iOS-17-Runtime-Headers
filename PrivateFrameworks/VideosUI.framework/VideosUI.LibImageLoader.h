
@interface VideosUI.LibImageLoader : NSObject <VUIImageLoader> {
    void artworkResizeUtility;
    void currentLoadingTasks;
}

- (void).cxx_destruct;
- (id)URLForObject:(id)arg1;
- (void)cancelLoad:(id)arg1;
- (bool)hasImageCache;
- (id)imageKeyForObject:(id)arg1;
- (id)init;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end
