
@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult <WBSParsecSearchMapsResult> {
    WBSParsecSearchMapsResultFeedbackSender * _mapsFeedbackSender;
    <WBSParsecSearchSession> * _parsecSearchSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, retain) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic, retain) <WBSParsecSearchSession> *parsecSearchSession;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)mapsFeedbackSender;
- (id)parsecSearchSession;
- (void)setMapsFeedbackSender:(id)arg1;
- (void)setParsecSearchSession:(id)arg1;

@end
