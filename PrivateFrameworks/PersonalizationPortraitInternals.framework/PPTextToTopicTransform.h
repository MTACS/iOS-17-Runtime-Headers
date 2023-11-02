
@interface PPTextToTopicTransform : NSObject {
    _PASNotificationToken * _assetUpdateNotificationToken;
    _PASLock * _lock;
    NSString * _mappingId;
    <TRINotificationToken> * _trialToken;
    NSString * _vocabularyPath;
    NSString * _weightsPath;
}

@property (nonatomic, readonly) unsigned long long outputTopicCount;
@property (nonatomic, readonly) float threshold;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithVocabulary:(id)arg1 weights:(id)arg2;
- (id)_payloadForTopic:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)iterateTopicsForText:(id)arg1 block:(id /* block */)arg2;
- (unsigned long long)outputTopicCount;
- (float)threshold;

@end
