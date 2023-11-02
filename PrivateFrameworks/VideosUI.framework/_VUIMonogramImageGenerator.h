
@interface _VUIMonogramImageGenerator : NSObject <VUIImageLoader> {
    NSOperationQueue * _imageGeneratorQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *imageGeneratorQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelLoad:(id)arg1;
- (id)imageGeneratorQueue;
- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)loadImageForURL:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end
