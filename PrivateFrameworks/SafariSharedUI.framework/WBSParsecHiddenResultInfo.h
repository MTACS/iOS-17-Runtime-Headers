
@interface WBSParsecHiddenResultInfo : NSObject {
    WBSParsecSearchResult * _hiddenResult;
    <WBSCompletionListItem> * _preferredCompletionListItem;
    unsigned long long  _preferredCompletionListItemPositionInCompletionList;
    unsigned long long  _preferredCompletionListItemPositionInFrequentlyVisitedSites;
    long long  _reasonForHidingResult;
}

@property (nonatomic, readonly) NSDictionary *feedbackDictionaryRepresentation;
@property (nonatomic, readonly) WBSParsecSearchResult *hiddenResult;
@property (nonatomic, readonly) <WBSCompletionListItem> *preferredCompletionListItem;
@property (nonatomic) unsigned long long preferredCompletionListItemPositionInCompletionList;
@property (nonatomic) unsigned long long preferredCompletionListItemPositionInFrequentlyVisitedSites;
@property (nonatomic, readonly) long long reasonForHidingResult;

- (void).cxx_destruct;
- (id)feedbackDictionaryRepresentation;
- (id)hiddenResult;
- (id)initWithHiddenResult:(id)arg1 preferredCompletionListItem:(id)arg2 reason:(long long)arg3;
- (id)preferredCompletionListItem;
- (unsigned long long)preferredCompletionListItemPositionInCompletionList;
- (unsigned long long)preferredCompletionListItemPositionInFrequentlyVisitedSites;
- (long long)reasonForHidingResult;
- (void)setPreferredCompletionListItemPositionInCompletionList:(unsigned long long)arg1;
- (void)setPreferredCompletionListItemPositionInFrequentlyVisitedSites:(unsigned long long)arg1;

@end
