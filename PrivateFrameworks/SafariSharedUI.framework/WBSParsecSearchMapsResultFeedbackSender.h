
@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate> {
    long long  _queryID;
    <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> * _searchResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> *searchResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSearchResult:(id)arg1;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)searchResult;

@end
