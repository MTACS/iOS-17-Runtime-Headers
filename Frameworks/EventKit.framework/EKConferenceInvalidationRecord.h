
@interface EKConferenceInvalidationRecord : NSObject {
    NSMutableSet * _replacementForURLs;
    NSURL * _validURL;
    NSMutableArray * _waitingCompletionHandlers;
}

@property (nonatomic, retain) NSMutableSet *replacementForURLs;
@property (nonatomic, retain) NSURL *validURL;
@property (nonatomic, retain) NSMutableArray *waitingCompletionHandlers;

- (void).cxx_destruct;
- (void)finishWithURL:(id)arg1 error:(id)arg2;
- (void)generateNewValidURLForOriginalURL:(id)arg1;
- (id)replacementForURLs;
- (void)setReplacementForURLs:(id)arg1;
- (void)setValidURL:(id)arg1;
- (void)setWaitingCompletionHandlers:(id)arg1;
- (id)validURL;
- (id)waitingCompletionHandlers;

@end
