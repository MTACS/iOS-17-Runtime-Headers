
@interface ATXCachedCandidateCounter : NSObject {
    NSMutableDictionary * _cache;
    BPSPublisher * _publisher;
}

- (void).cxx_destruct;
- (long long)countForCandidate:(id)arg1;
- (id)init;
- (id)initWithCandidateIdPublisher:(id)arg1;
- (void)populateCache;

@end
