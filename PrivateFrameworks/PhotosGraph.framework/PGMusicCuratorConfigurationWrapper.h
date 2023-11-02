
@interface PGMusicCuratorConfigurationWrapper : NSObject {
    void configuration;
}

@property (nonatomic, readonly) long long audioFilePrefetchThresholdInDays;
@property (nonatomic, readonly) long long metadataPrefetchThresholdInDays;

+ (id)defaultConfiguration;

- (long long)audioFilePrefetchThresholdInDays;
- (id)init;
- (long long)metadataPrefetchThresholdInDays;

@end
