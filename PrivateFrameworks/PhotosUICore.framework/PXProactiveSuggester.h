
@interface PXProactiveSuggester : NSObject

+ (unsigned long long)_applicableLayoutForTimelineSize:(unsigned long long)arg1;
+ (id)_clientIDForTimelineSize:(unsigned long long)arg1;
+ (id)_proactiveSuggestionsFromTimelineEntries:(id)arg1 withClient:(id)arg2 forTimelineSize:(unsigned long long)arg3;
+ (id)proactiveCriterionForFeaturedPhoto:(id)arg1;
+ (id)proactiveCriterionForMemory:(id)arg1;
+ (void)updateProactiveSuggestionsFromTimelineEntries:(id)arg1 forTimelineSize:(unsigned long long)arg2;

@end
