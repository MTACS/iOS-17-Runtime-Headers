
@interface AVPlayerItemPhotosensitivityMetadataHandler : NSObject <AVPlayerItemMetadataCollectorPushDelegate> {
    id /* block */  _handler;
    AVPlayerItem * _item;
    AVPlayerItemMetadataCollector * _metadataCollector;
    NSArray * _photosensitivityRegions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerItemMediaDataCollector *metadataCollector;
@property (nonatomic, retain) NSArray *photosensitivityRegions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1;
- (id)metadataCollector;
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;
- (id)photosensitivityRegions;
- (void)setPhotosensitivityRegions:(id)arg1;

@end
