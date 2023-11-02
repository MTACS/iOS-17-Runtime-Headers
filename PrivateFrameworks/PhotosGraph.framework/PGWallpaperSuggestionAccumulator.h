
@interface PGWallpaperSuggestionAccumulator : NSObject {
    NSMutableArray * _gatingOverflow;
    NSObject<OS_os_log> * _loggingConnection;
    unsigned long long  _maximumNumberOfSuggestionsToTryForGating;
    unsigned long long  _numberOfGatedSuggestions;
    unsigned long long  _numberOfSuggestionsReceived;
    NSMutableArray * _suggestions;
    unsigned long long  _targetMinimumNumberOfGatedSuggestions;
    unsigned long long  _targetNumberOfSuggestions;
}

@property (readonly) bool accumulationIsComplete;
@property (readonly) unsigned long long numberOfGatedSuggestions;
@property (readonly) NSArray *suggestions;

- (void).cxx_destruct;
- (bool)accumulationIsComplete;
- (void)addSuggestion:(id)arg1 passingGating:(bool)arg2;
- (id)initWithTargetNumberOfSuggestions:(unsigned long long)arg1 targetMinimumNumberOfGatedSuggestions:(unsigned long long)arg2 maximumNumberOfSuggestionsToTryForGating:(unsigned long long)arg3 loggingConnection:(id)arg4;
- (unsigned long long)numberOfGatedSuggestions;
- (id)suggestions;

@end
