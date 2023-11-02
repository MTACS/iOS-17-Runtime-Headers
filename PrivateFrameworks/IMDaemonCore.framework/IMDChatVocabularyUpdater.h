
@interface IMDChatVocabularyUpdater : NSObject {
    IMDChatRegistry * _chatRegistry;
    bool  _haveDeferredUpdateRequest;
    INVocabulary * _vocabulary;
}

@property (nonatomic, retain) IMDChatRegistry *chatRegistry;
@property (nonatomic) bool haveDeferredUpdateRequest;
@property (nonatomic, retain) INVocabulary *vocabulary;

+ (void)performInitialUpdateIfNeeded;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateVocabularyExcludingChat:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)chatRegistry;
- (bool)haveDeferredUpdateRequest;
- (id)initWithChatRegistry:(id)arg1 vocabulary:(id)arg2;
- (void)setChatRegistry:(id)arg1;
- (void)setHaveDeferredUpdateRequest:(bool)arg1;
- (void)setVocabulary:(id)arg1;
- (void)updateVocabularyForAddedChat:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateVocabularyForDeferredUpdateRequestIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)updateVocabularyForDeletedChat:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateVocabularyForRenamedChat:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)vocabulary;

@end
