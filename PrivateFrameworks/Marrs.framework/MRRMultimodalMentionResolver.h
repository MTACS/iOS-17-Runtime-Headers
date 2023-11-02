
@interface MRRMultimodalMentionResolver : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _locale;
    struct unique_ptr<marrs::mrr::mr::MROrchestrator, std::default_delete<marrs::mrr::mr::MROrchestrator>> { 
        struct __compressed_pair<marrs::mrr::mr::MROrchestrator *, std::default_delete<marrs::mrr::mr::MROrchestrator>> { 
            struct MROrchestrator {} *__value_; 
        } __ptr_; 
    }  _mrOrchestrator;
}

+ (id)name;
+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAssets:(id)arg1 forLocale:(id)arg2 status:(id*)arg3;
- (id)resolveCandidatesForUtterance:(id)arg1 entities:(id)arg2 maximumCandidates:(unsigned long long)arg3 status:(id*)arg4;
- (bool)resolveCandidatesForUtterance:(id)arg1 entities:(id)arg2 maximumCandidates:(unsigned long long)arg3 status:(id*)arg4 completionBlock:(id /* block */)arg5;
- (bool)resolveCandidatesForUtterance:(id)arg1 mentions:(id)arg2 entities:(id)arg3 maximumCandidates:(unsigned long long)arg4 status:(id*)arg5 completionBlock:(id /* block */)arg6;
- (bool)resolveCandidatesForUtterance:(id)arg1 status:(id*)arg2 completionBlock:(id /* block */)arg3;
- (id)resolveCandidatesForUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 entities:(id)arg4 maximumCandidates:(unsigned long long)arg5 status:(id*)arg6;
- (bool)resolveCandidatesForUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 entities:(id)arg4 maximumCandidates:(unsigned long long)arg5 status:(id*)arg6 completionBlock:(id /* block */)arg7;
- (bool)resolveCandidatesForUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 mentions:(id)arg4 entities:(id)arg5 maximumCandidates:(unsigned long long)arg6 status:(id*)arg7 completionBlock:(id /* block */)arg8;
- (id)resolveMentionsInUtterance:(id)arg1 mentions:(id)arg2 entities:(id)arg3 maximumCandidates:(unsigned long long)arg4 status:(id*)arg5;
- (id)resolveMentionsInUtterance:(id)arg1 status:(id*)arg2;
- (id)resolveMentionsInUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 mentions:(id)arg4 entities:(id)arg5 maximumCandidates:(unsigned long long)arg6 status:(id*)arg7;
- (id)resolveReferencesInUtteranceImpl:(id)arg1 status:(id*)arg2;

@end
