
@interface SYNotesActivationRequest : NSObject {
    NSMutableArray * __imageFileURLs;
    NSMutableArray * __imagesData;
    NSMutableArray * __urls;
    bool  _shouldAutoInsertLinkToCurrentActivity;
}

@property (nonatomic, retain) NSMutableArray *_imageFileURLs;
@property (nonatomic, retain) NSMutableArray *_imagesData;
@property (nonatomic, retain) NSMutableArray *_urls;
@property (nonatomic, readonly) NSArray *imageFileURLs;
@property (nonatomic, readonly) NSArray *imagesData;
@property (nonatomic) bool shouldAutoInsertLinkToCurrentActivity;
@property (nonatomic, readonly) NSArray *urls;

- (void).cxx_destruct;
- (id)_imageFileURLs;
- (id)_imagesData;
- (id)_urls;
- (void)addImageData:(id)arg1;
- (void)addImageFileURL:(id)arg1;
- (void)addImageFileURLs:(id)arg1;
- (void)addImagesData:(id)arg1;
- (void)addURL:(id)arg1;
- (void)addURLs:(id)arg1;
- (id)imageFileURLs;
- (id)imagesData;
- (id)init;
- (void)setShouldAutoInsertLinkToCurrentActivity:(bool)arg1;
- (void)set_imageFileURLs:(id)arg1;
- (void)set_imagesData:(id)arg1;
- (void)set_urls:(id)arg1;
- (bool)shouldAutoInsertLinkToCurrentActivity;
- (id)urls;

@end
