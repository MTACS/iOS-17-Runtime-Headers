
@interface SKUIProductReviewURLProvider : NSObject {
    NSString * _itemID;
    NSURL * _rateURL;
    SSURLBag * _urlBag;
    NSURL * _writeReviewURL;
}

@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, retain) NSURL *rateURL;
@property (nonatomic, retain) SSURLBag *urlBag;
@property (nonatomic, retain) NSURL *writeReviewURL;

- (void).cxx_destruct;
- (id)_urlByAppendingItemId:(id)arg1;
- (void)fetchURLsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithClientContext:(id)arg1 itemID:(id)arg2;
- (id)itemID;
- (id)rateURL;
- (void)setItemID:(id)arg1;
- (void)setRateURL:(id)arg1;
- (void)setUrlBag:(id)arg1;
- (void)setWriteReviewURL:(id)arg1;
- (id)urlBag;
- (id)writeReviewURL;

@end
