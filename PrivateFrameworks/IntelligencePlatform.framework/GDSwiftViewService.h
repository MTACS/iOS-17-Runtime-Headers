
@interface GDSwiftViewService : NSObject {
    void accessRequester;
    void databaseCache;
}

+ (id)clientService;

- (void).cxx_destruct;
- (id)autonamingViewWithViewName:(id)arg1 error:(id*)arg2;
- (id)donationViewAndReturnError:(id*)arg1;
- (id)firstPartyLongTermTopicViewAndReturnError:(id*)arg1;
- (id)firstPartyShortTermTopicViewAndReturnError:(id*)arg1;
- (id)gdFeatureViewAndReturnError:(id*)arg1;
- (id)gdSwiftSubgraphViewContextWithName:(id)arg1 tableName:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)pageRankViewAndReturnError:(id*)arg1;
- (id)personViewAndReturnError:(id*)arg1;
- (id)visualIdentifierViewAndReturnError:(id*)arg1;

@end
