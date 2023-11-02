
@interface SUUIStorePage : NSObject <NSCopying> {
    SUUIArtwork * _backgroundArtwork;
    NSData * _itmlData;
    NSHTTPURLResponse * _itmlResponse;
    SSMetricsConfiguration * _metricsConfiguration;
    NSString * _metricsPageDescription;
    NSArray * _pageComponents;
    NSString * _pageType;
    NSURL * _pageURL;
    SUUIProductPage * _productPage;
    NSString * _title;
    SUUIUber * _uber;
    NSMutableDictionary * _values;
}

@property (nonatomic, retain) NSData *ITMLData;
@property (nonatomic, retain) NSHTTPURLResponse *ITMLResponse;
@property (nonatomic, retain) SUUIArtwork *backgroundArtwork;
@property (nonatomic, retain) SSMetricsConfiguration *metricsConfiguration;
@property (nonatomic, copy) NSString *metricsPageDescription;
@property (nonatomic, copy) NSArray *pageComponents;
@property (nonatomic, copy) NSString *pageType;
@property (nonatomic, copy) NSURL *pageURL;
@property (nonatomic, copy) SUUIProductPage *productPage;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) SUUIUber *uber;

- (void).cxx_destruct;
- (id)ITMLData;
- (id)ITMLResponse;
- (id)backgroundArtwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)metricsConfiguration;
- (id)metricsPageDescription;
- (id)pageComponents;
- (id)pageType;
- (id)pageURL;
- (id)productPage;
- (void)setBackgroundArtwork:(id)arg1;
- (void)setITMLData:(id)arg1;
- (void)setITMLResponse:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setPageComponents:(id)arg1;
- (void)setPageType:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setProductPage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUber:(id)arg1;
- (void)setValue:(id)arg1 forPageKey:(id)arg2;
- (id)title;
- (id)uber;
- (id)valueForPageKey:(id)arg1;

@end
