
@interface ATXSpotlightClientResponse : NSObject {
    NSMutableArray * _codePathIdTriggers;
    ATXSpotlightHidingUIController * _controller;
    bool  _isZKWHideContextsEnabled;
    NSArray * _scores;
    NSArray * _sections;
    unsigned long long  _signpostId;
    NSArray * _topics;
}

@property (nonatomic, readonly) NSUUID *codePathIdTrigger;
@property (nonatomic, readonly) NSArray *codePathIdTriggers;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *topics;

+ (id)_createEmptyResultsWithCount:(unsigned long long)arg1;
+ (unsigned long long)_indexOfFirstSpotlightRecentInServerResults:(id)arg1 withSections:(id)arg2;
+ (id)_limitingResults:(id)arg1 scores:(id)arg2 spotlightRecentIndex:(unsigned long long)arg3 limit:(unsigned long long)arg4;
+ (void)_logWeatherResponsesWithTopics:(id)arg1 serverResults:(id)arg2;
+ (id)_removeDuplicates:(id)arg1;
+ (id)_resultForError:(id)arg1 subtitles:(id)arg2 searchString:(id)arg3;
+ (unsigned long long)_trialSuggestionsMaxCountWithDefault:(unsigned long long)arg1;
+ (id)createSectionWithTitle:(id)arg1 sectionBundleIdentifier:(id)arg2 resultCount:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_addIdentifiersFromTopics:(id)arg1 serverTopics:(id)arg2;
- (id)_createSectionsFromServerResults:(id)arg1;
- (id)_createSectionsFromServerResults:(id)arg1 limit:(unsigned long long)arg2;
- (id)_removeDuplicateTopics:(id)arg1;
- (id)_removeHidden:(id)arg1;
- (id)_replaceMissingWithError:(id)arg1;
- (void)_updateSectionBundleIdentifiersWithServerResults:(id)arg1;
- (void)addCodePathId:(id)arg1;
- (id)codePathIdTrigger;
- (id)codePathIdTriggers;
- (id)createSectionsFromServerResults:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTopics:(id)arg1 scores:(id)arg2 sections:(id)arg3;
- (id)sections;
- (id)topics;

@end
