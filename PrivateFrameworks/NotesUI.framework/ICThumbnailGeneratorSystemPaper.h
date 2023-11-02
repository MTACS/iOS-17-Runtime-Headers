
@interface ICThumbnailGeneratorSystemPaper : ICThumbnailGenerator {
    void cache;
}

@property (nonatomic, readonly) <ICThumbnailCaching> *cache;

+ (id)chromeBackdropImageUrlFor:(id)arg1;
+ (struct CGSize { double x1; double x2; })chromeSize;

- (void).cxx_destruct;
- (id)cache;
- (void)generateThumbnailWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 cache:(id)arg2;
- (id)thumbnailWith:(id)arg1;

@end
