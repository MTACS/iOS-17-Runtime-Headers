
@interface SearchUIQuickLookThumbnailImage : SearchUIImage {
    FPItemID * _fpItemID;
    bool  _isCompact;
    QLThumbnailGenerationRequest * _request;
    NSURL * _url;
}

@property (nonatomic, retain) FPItemID *fpItemID;
@property bool isCompact;
@property QLThumbnailGenerationRequest *request;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)dealloc;
- (id)fpItemID;
- (void)generateImageWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithResult:(id)arg1 url:(id)arg2 isCompact:(bool)arg3;
- (id)initWithSFImage:(id)arg1;
- (bool)isCompact;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)representationType;
- (id)request;
- (void)setFpItemID:(id)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setupRequest:(id)arg1;
- (void)updateSize;
- (id)url;

@end
