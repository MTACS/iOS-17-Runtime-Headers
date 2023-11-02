
@interface HLPLoadInfo : NSObject {
    long long  _accessType;
    bool  _analyticsLogged;
    NSString * _anchor;
    HLPHelpTopicItem * _helpTopicItem;
    NSArray * _searchTerms;
}

@property (nonatomic, readonly) long long accessType;
@property (nonatomic) bool analyticsLogged;
@property (nonatomic, readonly) NSString *analyticsSourceType;
@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) HLPHelpTopicItem *helpTopicItem;
@property (nonatomic, readonly) NSArray *searchTerms;

+ (id)infoWithTopicItem:(id)arg1 accesstype:(long long)arg2 searchTerms:(id)arg3 anchor:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithTopicItem:(id)arg1 accessType:(long long)arg2 searchTerms:(id)arg3 anchor:(id)arg4;
- (long long)accessType;
- (bool)analyticsLogged;
- (id)analyticsSourceType;
- (id)anchor;
- (id)helpTopicItem;
- (id)searchTerms;
- (void)setAnalyticsLogged:(bool)arg1;

@end
