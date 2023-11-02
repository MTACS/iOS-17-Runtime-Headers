
@interface TISKCandidateAcceptEvent : TISKEvent {
    TIKeyboardCandidate * _candidate;
    bool  _isAutocorrection;
    NSString * _wordBucketCategory;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic) bool isAutocorrection;
@property (nonatomic, retain) NSString *wordBucketCategory;

- (void).cxx_destruct;
- (id)candidate;
- (id)description;
- (id)init:(id)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3 wordBucketCategory:(id)arg4 isAutocorrection:(bool)arg5;
- (bool)isAutocorrection;
- (void)reportToSession:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setIsAutocorrection:(bool)arg1;
- (void)setWordBucketCategory:(id)arg1;
- (id)wordBucketCategory;

@end
