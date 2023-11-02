
@interface MUISearchSuggestionsGenerator : NSObject <EFLoggable> {
    NSMutableArray * _activeOperations;
    NSMutableArray * _cancelledOperations;
    <MUISearchSuggestionsGeneratorDelegate> * _delegate;
    _MUISearchSuggestionsOperation * _pendingOperation;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _suggesters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSuggesters:(id)arg1 delegate:(id)arg2;
- (id)startGeneratingSuggestionsUsingPhraseManager:(id)arg1;
- (void)stopGeneratingSuggestionsWithIdentifier:(id)arg1;

@end
