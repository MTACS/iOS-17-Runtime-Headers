
@interface SUStockLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource> {
    LPImage * _linkPresentationImage;
    NSString * _stockName;
    NSString * _stockSymbol;
    NSURL * _stockURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPImage *linkPresentationImage;
@property (nonatomic, readonly) NSString *stockName;
@property (nonatomic, readonly) NSString *stockSymbol;
@property (nonatomic, readonly) NSURL *stockURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithStockSymbol:(id)arg1 name:(id)arg2 url:(id)arg3;
- (id)linkPresentationImage;
- (id)stockName;
- (id)stockSymbol;
- (id)stockURL;

@end
