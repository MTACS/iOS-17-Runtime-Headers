
@interface GDViewService : NSObject {
    GDSwiftViewService * _swiftViewService;
}

+ (id)clientService;
+ (id)defaultService;

- (void).cxx_destruct;
- (id)autonamingViewWithViewName:(id)arg1 error:(id*)arg2;
- (id)donationViewWithError:(id*)arg1;
- (id)featureViewWithError:(id*)arg1;
- (id)firstPartyLongTermTopicViewWithError:(id*)arg1;
- (id)firstPartyShortTermTopicViewWithError:(id*)arg1;
- (id)initWithSwiftViewService:(id)arg1;
- (id)pageRankViewWithError:(id*)arg1;
- (id)personViewWithError:(id*)arg1;
- (id)subgraphViewContextWithViewName:(id)arg1 tableName:(id)arg2 error:(id*)arg3;
- (id)visualIdentifierViewWithError:(id*)arg1;

@end
