
@interface PPSocialHighlightStorageGuardedData : NSObject {
    unsigned long long  _countOfEventsInBloomFilter;
    _PASBloomFilterForWriting * _feedbackStreamBloomFilter;
    BMSocialHighlightFeedbackStream * feedbackStream;
}

- (void).cxx_destruct;

@end
