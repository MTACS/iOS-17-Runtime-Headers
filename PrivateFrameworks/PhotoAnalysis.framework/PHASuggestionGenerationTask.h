
@interface PHASuggestionGenerationTask : NSObject <PHASuggestionGenerationTask> {
    bool  _didProduceContent;
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

- (void).cxx_destruct;
- (bool)currentPlatformIsSupported;
- (bool)didProduceContent;
- (id)generateSuggestionsWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)generateWallpaperSuggestions;
- (id)incrementalKey;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)setSuggestionOptionsDictionary:(id)arg1;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)suggestionOptionsDictionary;
- (unsigned char)suggestionProfileFromSuggestionType:(unsigned short)arg1 subtype:(unsigned short)arg2;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
