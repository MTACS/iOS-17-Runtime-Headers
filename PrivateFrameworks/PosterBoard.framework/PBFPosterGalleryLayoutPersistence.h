
@interface PBFPosterGalleryLayoutPersistence : NSObject {
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)loadNewestUsableGalleryLayoutReturningError:(out id*)arg1;
- (id)loadNewestUsableGalleryLayoutReturningPersistenceDate:(out id*)arg1 purgeableGalleryLayoutURLs:(out id*)arg2 error:(out id*)arg3;
- (bool)saveGalleryLayout:(id)arg1 returningPersistenceDate:(out id*)arg2 error:(out id*)arg3;
- (id)url;

@end
