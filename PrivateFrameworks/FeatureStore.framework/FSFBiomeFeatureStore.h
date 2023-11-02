
@interface FSFBiomeFeatureStore : NSObject <FSFFeatureStore> {
    BMStoreConfig * _config;
}

@property (nonatomic, readonly) BMStoreConfig *config;

+ (unsigned long long)maxStreamSizeInBytes;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (id)config;
- (bool)deleteAllStreams;
- (bool)deleteStream:(id)arg1;
- (id)getStream:(id)arg1;
- (id)init;

@end
