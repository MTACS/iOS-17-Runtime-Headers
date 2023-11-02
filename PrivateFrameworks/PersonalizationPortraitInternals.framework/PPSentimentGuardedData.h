
@interface PPSentimentGuardedData : NSObject {
    NSString * _abGroupIdentifier;
    _PASCFBurstTrie * _tokenWeightTrie;
    _PASLazyPurgeableResult * _tokenizer;
}

- (void).cxx_destruct;

@end
