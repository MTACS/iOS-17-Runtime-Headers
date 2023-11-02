
@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)_entriesFromMultilineString:(id)arg1;
+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)path;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)setPath:(id)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
