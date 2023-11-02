
@interface ATXStaticSuggestionsManager : NSObject

+ (id)executableObjectHashToPositionMappingForSuggestions:(id)arg1;
+ (bool)isValidPreviousPosition:(id)arg1 uiLimit:(unsigned long long)arg2 newSuggestionsCount:(unsigned long long)arg3;
+ (id)preservePreviousAppPositionsForPreviousSuggestions:(id)arg1 newSuggestions:(id)arg2 uiLimit:(unsigned long long)arg3;
+ (bool)suggestionsAreAllAppExecutableTypeAndHaveValidHash:(id)arg1;

@end
