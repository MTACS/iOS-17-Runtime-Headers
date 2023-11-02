
@interface SUUIProductPageInformationViewController : UIViewController <SUUIContentRatingArtworkLoaderObserver> {
    SUUIClientContext * _clientContext;
    SUUIContentRatingArtworkResourceLoader * _contentRatingArtworkLoader;
    SUUIProductInformationView * _informationView;
    SUUIProductPageItem * _item;
    NSOperationQueue * _operationQueue;
    SUUIProductPageProductInfo * _productInfo;
}

@property (nonatomic, readonly) SUUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SUUIProductPageItem *item;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contentRatingResourceLoader;
- (id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2;
- (id)_informationLinesWithProductInfo:(id)arg1;
- (void)_updateLinesWithRatingImage:(id)arg1;
- (id)clientContext;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)dealloc;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductInformation:(id)arg1 clientContext:(id)arg2;
- (id)item;
- (void)loadView;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
