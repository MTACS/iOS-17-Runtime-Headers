
@protocol _CPSafariUsagePropensity <NSObject>

@required

- (_CPEngagementShareRatio *)engagementShareRatio;
- (float)goToSite;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (float)localGoto;
- (float)localTap;
- (float)other;
- (float)parsecAppStore;
- (float)parsecGoto;
- (float)parsecMaps;
- (float)parsecNews;
- (float)parsecOther;
- (float)parsecStocks;
- (float)parsecTap;
- (float)parsecWeather;
- (float)parsecWeb;
- (float)parsecWiki;
- (void)setEngagementShareRatio:(_CPEngagementShareRatio *)arg1;
- (void)setGoToSite:(float)arg1;
- (void)setLocalGoto:(float)arg1;
- (void)setLocalTap:(float)arg1;
- (void)setOther:(float)arg1;
- (void)setParsecAppStore:(float)arg1;
- (void)setParsecGoto:(float)arg1;
- (void)setParsecMaps:(float)arg1;
- (void)setParsecNews:(float)arg1;
- (void)setParsecOther:(float)arg1;
- (void)setParsecStocks:(float)arg1;
- (void)setParsecTap:(float)arg1;
- (void)setParsecWeather:(float)arg1;
- (void)setParsecWeb:(float)arg1;
- (void)setParsecWiki:(float)arg1;
- (void)setThirdPartyCompletionOrRecentSearch:(float)arg1;
- (void)setThirdPartyGoto:(float)arg1;
- (void)setThirdPartyTap:(float)arg1;
- (void)setTopHitTriggerRatio:(_CPEngagementTriggerRatio *)arg1;
- (void)setTotalEngagements:(int)arg1;
- (void)setTotalTopHitEngagements:(int)arg1;
- (float)thirdPartyCompletionOrRecentSearch;
- (float)thirdPartyGoto;
- (float)thirdPartyTap;
- (_CPEngagementTriggerRatio *)topHitTriggerRatio;
- (int)totalEngagements;
- (int)totalTopHitEngagements;

@end
