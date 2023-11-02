
@interface U2OwlModel : NSObject <QUUnderstandingModel> {
    QUEmbeddingService * _embeddingService;
    NSLocale * _locale;
    U2HeadWrapper * _u2headWrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLocale *locale;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)getUnderstandingForQueryString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithLocale:(id)arg1;
- (void)loadWithCompletionHandler:(id /* block */)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;

@end
