
@interface ATXContextualEngine : NSObject {
    void contextStore;
    void internalServer;
    void suggestionServer;
    void suggestionStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)donateRerankedBlendingSuggestions:(id)arg1;
- (id)init;

@end
