
@interface CNAutocompleteSuggestedResultPrioritizer : NSObject

+ (id)bestAvailablePrioritizer;
+ (id)passthroughPrioritizer;
+ (id)peopleSuggesterPrioritizer;

@end
