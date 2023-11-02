
@interface PDFTextSearchAggregator : NSObject <PDFDocumentAsyncFindDelegate> {
    <UITextSearchAggregator> * _aggregator;
    bool  _isActive;
    NSString * _searchString;
}

@property (nonatomic, readonly) <UITextSearchAggregator> *aggregator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregator;
- (bool)cancelFind;
- (void)foundResults:(id)arg1 forDocument:(id)arg2;
- (void)foundResults:(id)arg1 forPage:(id)arg2;
- (id)initWithSearchString:(id)arg1 aggregator:(id)arg2;
- (void)invalidate;
- (id)searchString;

@end
