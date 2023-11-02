
@interface PPTopicExtractionPlugin : NSObject {
    PPTopicDissector * _dissector;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_topicContainersForText:(id)arg1 isPlainText:(bool)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 contactHandles:(id)arg6 weight:(double)arg7 isOutgoing:(bool)arg8;
- (id)extractionsFromText:(id)arg1 bundleId:(id)arg2;
- (id)init;
- (id)initWithTopicDissector:(id)arg1;

@end
