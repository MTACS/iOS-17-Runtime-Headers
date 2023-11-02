
@interface PXStoryCompanionTimelineRequestConfiguration : NSObject <NSCopying> {
    PHAssetCollection * _assetCollection;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _songsProducerKind;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic, retain) PHAssetCollection *assetCollection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long songsProducerKind;
@property (nonatomic) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2;
- (id)queue;
- (void)setAssetCollection:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSongsProducerKind:(long long)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)songsProducerKind;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
