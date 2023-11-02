
@interface PPSentiment : NSObject {
    _PASNotificationToken * _assetUpdateNotificationToken;
    float  _intercept;
    _PASLock * _lock;
    float  _weightBucketSize;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (float)sentimentScoreForText:(id)arg1;

@end
