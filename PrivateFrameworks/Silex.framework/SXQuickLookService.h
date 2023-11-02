
@interface SXQuickLookService : NSObject <SXQuickLookService> {
    QLThumbnailGenerator * _generator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) QLThumbnailGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchThumbnailForFile:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 onCompletion:(id /* block */)arg3 onError:(id /* block */)arg4;
- (id)generator;
- (id)init;

@end
