
@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {
    <MapsSuggestionsSourceDelegate> * _delegate;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (unsigned long long)addOrUpdateMySuggestionEntries:(id)arg1;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (id)delegate;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (id)initFromResourceDepot:(id)arg1;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (id)uniqueName;
- (double)updateSuggestionEntriesOfType:(long long)arg1 handler:(id /* block */)arg2;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
