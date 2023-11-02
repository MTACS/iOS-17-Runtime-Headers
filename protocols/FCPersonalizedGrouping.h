
@protocol FCPersonalizedGrouping

@required

- (NSArray *)bestOfGroupFromFeedItems:(NSArray *)arg1 scoreProfiles:(FCMapTable *)arg2 configurationSet:(long long)arg3;
- (NSArray *)bestOfGroupFromHeadlines:(NSArray *)arg1 configurationSet:(long long)arg2;

@end
