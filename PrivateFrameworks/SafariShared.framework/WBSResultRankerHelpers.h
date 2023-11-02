
@interface WBSResultRankerHelpers : NSObject

+ (bool)allowMatch:(id)arg1 forMatch:(id)arg2 forQueryString:(id)arg3;
+ (bool)hostAreEqual:(id)arg1 forSecondURLString:(id)arg2;
+ (long long)numberOfWords:(id)arg1;
+ (id)simplifiedURL:(id)arg1;
+ (double)topSitesScoreAndVisitCountScoreFactor:(id)arg1 forTopSiteScore:(float)arg2 forVisitCountScore:(long long)arg3;

@end
