
@interface PPDocumentTopicInfo : NSObject {
    NSMutableArray * _topicAlgorithmCounts;
}

- (void).cxx_destruct;
- (void)addToCountForAlgorithm:(unsigned long long)arg1 value:(double)arg2;
- (double)countForAlgorithm:(unsigned long long)arg1;
- (id)init;

@end
