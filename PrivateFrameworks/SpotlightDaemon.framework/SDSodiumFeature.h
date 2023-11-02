
@interface SDSodiumFeature : NSObject

+ (id)allBundleIDsUsingSodiumRanking;
+ (bool)isCalendarBundle:(id)arg1;
+ (bool)isMailBundle:(id)arg1;
+ (bool)isMessagesBundle:(id)arg1;
+ (bool)isPhotosBundle:(id)arg1;
+ (bool)pureSodiumL2RankingAllowedWithSectionBundle:(id)arg1 clientBundle:(id)arg2;
+ (bool)usingSodiumRankingForClientBundle:(id)arg1;

@end
