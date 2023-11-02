
@interface PPTTLDeletionPolicy : NSObject {
    PPLocalLocationStore * _locationStore;
    PPLocalNamedEntityStore * _namedEntityStore;
    NSArray * _rules;
    PPLocalTopicStore * _topicStore;
}

+ (id)defaultPolicy;

- (void).cxx_destruct;
- (bool)applyPolicyWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
- (id)description;
- (id)init;
- (id)initWithRules:(id)arg1 namedEntityStore:(id)arg2 topicStore:(id)arg3 locationStore:(id)arg4;

@end
