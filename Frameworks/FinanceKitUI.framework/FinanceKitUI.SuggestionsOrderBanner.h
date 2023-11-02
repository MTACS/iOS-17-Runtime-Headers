
@interface FinanceKitUI.SuggestionsOrderBanner : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  order;
    void orderBundle;
}

@property (nonatomic, readonly) NSAttributedString *bannerAttributedSubtitle;
@property (nonatomic, readonly) UIImage *merchantLogo;
@property (nonatomic, readonly) NSString *merchantName;
@property (nonatomic, readonly) NSURL *orderDeepLink;

+ (id)walletLogo;

- (void).cxx_destruct;
- (id)bannerAttributedSubtitle;
- (void)dealloc;
- (id)init;
- (id)init:(id)arg1 error:(id*)arg2;
- (id)merchantLogo;
- (id)merchantName;
- (id)orderDeepLink;

@end
