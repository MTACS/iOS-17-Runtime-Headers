
@interface _AMUIPosterUpdate : NSObject <BSCancellable> {
    NSMutableArray * _completions;
    PRSPosterConfiguration * _firedConfiguration;
    NSError * _firedError;
    bool  _isFinished;
    PRSPosterConfiguration * _posterConfiguration;
    PRSPosterUpdate * _update;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSPosterConfiguration *posterConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PRSPosterUpdate *update;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)adoptCompletionsFromStaleUpdate:(id)arg1;
- (void)appendCompletion:(id /* block */)arg1;
- (void)cancel;
- (bool)fireCompletionBlocksWithUpdatedPosterConfiguration:(id)arg1 error:(id)arg2;
- (unsigned long long)hash;
- (id)initWithPosterConfiguration:(id)arg1 update:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)posterConfiguration;
- (id)update;
- (id)userInfo;

@end
