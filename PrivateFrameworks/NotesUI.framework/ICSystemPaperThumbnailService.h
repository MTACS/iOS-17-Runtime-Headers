
@interface ICSystemPaperThumbnailService : NSObject {
    ICSystemPaperThumbnailServiceInternal * _systemPaperThumbnailService;
}

@property (nonatomic, retain) ICSystemPaperThumbnailServiceInternal *systemPaperThumbnailService;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSystemPaperThumbnailService:(id)arg1;
- (void)invalidate;
- (void)invalidateForNote:(id)arg1;
- (void)observe;
- (void)setSystemPaperThumbnailService:(id)arg1;
- (id)systemPaperThumbnailService;
- (void)updateIfNeededForNote:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIfNeededWithCompletion:(id /* block */)arg1;

@end
