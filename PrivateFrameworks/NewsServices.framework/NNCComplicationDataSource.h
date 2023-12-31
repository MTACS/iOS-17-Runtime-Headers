
@interface NNCComplicationDataSource : NSObject

+ (id)_complicationTitle;
+ (id)_loadingStoriesLargeString;
+ (id)_loadingStoriesShortString;
+ (id)_noNewStoriesLargeString;
+ (id)_noNewStoriesShortString;
+ (id)_oneLineHeadlineTextProviderForResult:(id)arg1;
+ (id)_templateForFamily:(long long)arg1 newsStoryResult:(id)arg2 compact:(bool)arg3;
+ (id)fullColorImageProviderWithName:(id)arg1;
+ (id)imageProviderWithForegroundName:(id)arg1 compact:(bool)arg2;
+ (id)newsTintColor;
+ (id)staticTemplateForFamily:(long long)arg1 compact:(bool)arg2;

@end
