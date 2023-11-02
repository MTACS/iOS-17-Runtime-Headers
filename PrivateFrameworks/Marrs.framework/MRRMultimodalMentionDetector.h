
@interface MRRMultimodalMentionDetector : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _locale;
    struct unique_ptr<marrs::mrr::md::MRRMentionDetectorInterface, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> { 
        struct __compressed_pair<marrs::mrr::md::MRRMentionDetectorInterface *, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> { 
            struct MRRMentionDetectorInterface {} *__value_; 
        } __ptr_; 
    }  _mentionDetector;
}

+ (id)name;
+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)detectMentionsInUtterance:(id)arg1 maximumCandidates:(unsigned long long)arg2 status:(id*)arg3;
- (bool)detectMentionsInUtterance:(id)arg1 maximumCandidates:(unsigned long long)arg2 status:(id*)arg3 completionBlock:(id /* block */)arg4;
- (id)detectMentionsInUtterance:(id)arg1 status:(id*)arg2;
- (bool)detectMentionsInUtterance:(id)arg1 status:(id*)arg2 completionBlock:(id /* block */)arg3;
- (id)detectMentionsInUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 maximumCandidates:(unsigned long long)arg4 status:(id*)arg5;
- (bool)detectMentionsInUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 maximumCandidates:(unsigned long long)arg4 status:(id*)arg5 completionBlock:(id /* block */)arg6;
- (id)detectMentionsInUtteranceImpl:(id)arg1 status:(id*)arg2;
- (id)detectMentionsInUtteranceRequest:(id)arg1 status:(id*)arg2;
- (id)initWithAssets:(id)arg1 forLocale:(id)arg2 status:(id*)arg3;

@end
