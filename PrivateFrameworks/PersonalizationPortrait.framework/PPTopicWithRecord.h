
@interface PPTopicWithRecord : PPTopic {
    PPTopicRecord * _mostRelevantRecord;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2;
- (id)mostRelevantRecord;
- (double)sentimentScore;

@end
