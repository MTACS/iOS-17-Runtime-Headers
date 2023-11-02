
@interface PHAWallpaperSuggestionGenerationWeeklyTask : NSObject <PHASuggestionGenerationTask> {
    unsigned long long  _generatedContent;
    unsigned long long  _generationOptions;
    NSDictionary * _suggestionOptionsDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (nonatomic, retain) NSDictionary *suggestionOptionsDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

+ (id)generationOptionNameFromSingleOption:(unsigned long long)arg1;
+ (void)sendWallpaperGenerationCompletedBiomeEvent:(id)arg1;

- (void).cxx_destruct;
- (id)baseSuggestionOptionsWithSubtypes:(id)arg1;
- (bool)currentPlatformIsSupported;
- (bool)didProduceContent;
- (id)generateSuggestionsWithContentMode:(short)arg1 suggestionController:(id)arg2 progressReporter:(id)arg3 shouldReload:(bool*)arg4;
- (id)generateSuggestionsWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)incrementalKey;
- (id)initWithGenerationOptions:(unsigned long long)arg1;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)setSuggestionOptionsDictionary:(id)arg1;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)subtypePredicateWithContentMode:(short)arg1;
- (id)suggestionOptionsDictionary;
- (id)suggestionOptionsWithContentMode:(short)arg1;
- (unsigned char)suggestionProfileForContentMode:(short)arg1;
- (bool)suggestionsExistInPhotoLibrary:(id)arg1 subtypePredicate:(id)arg2;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;
- (unsigned long long)version;

@end
