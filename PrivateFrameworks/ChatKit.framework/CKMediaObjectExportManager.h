
@interface CKMediaObjectExportManager : NSObject {
    bool  _ignoreSyndicationIdentifiers;
    NSString * _metricsSource;
    NSArray * _queuedMediaObjects;
    bool  _queuedMediaObjectsArePhotosCompatible;
}

@property (nonatomic) bool ignoreSyndicationIdentifiers;
@property (nonatomic, retain) NSString *metricsSource;
@property (nonatomic, retain) NSArray *queuedMediaObjects;
@property (nonatomic) bool queuedMediaObjectsArePhotosCompatible;

+ (id)_serialBackgroundQueue;

- (void).cxx_destruct;
- (id)_phAssetCreationRequestForMediaObject:(id)arg1 withSyndicationIdentifier:(id)arg2;
- (void)dequeueMediaObject:(id)arg1;
- (void)exportMediaObject:(id)arg1 completion:(id /* block */)arg2;
- (void)exportMediaObject:(id)arg1 withFileName:(id)arg2 completion:(id /* block */)arg3;
- (void)exportMediaObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)exportMediaObjects:(id)arg1 withFileNames:(id)arg2 completion:(id /* block */)arg3;
- (void)exportQueuedMediaObjectsWithCompletion:(id /* block */)arg1;
- (bool)ignoreSyndicationIdentifiers;
- (id)initWithMediaObject:(id)arg1;
- (id)initWithMediaObjects:(id)arg1;
- (id)metricsSource;
- (void)queueMediaObject:(id)arg1;
- (id)queuedMediaObjects;
- (bool)queuedMediaObjectsArePhotosCompatible;
- (void)setIgnoreSyndicationIdentifiers:(bool)arg1;
- (void)setMetricsSource:(id)arg1;
- (void)setQueuedMediaObjects:(id)arg1;
- (void)setQueuedMediaObjectsArePhotosCompatible:(bool)arg1;

@end
