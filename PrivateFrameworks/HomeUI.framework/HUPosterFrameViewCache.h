
@interface HUPosterFrameViewCache : NSObject {
    NSMutableArray * _posterFrameViewQueue;
}

@property (nonatomic, retain) NSMutableArray *posterFrameViewQueue;

+ (id)dequeuePosterFrameViewForWidth:(double)arg1;
+ (void)enqueuePosterFrameView:(id)arg1;
+ (void)purgeCache;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (id)posterFrameViewQueue;
- (void)setPosterFrameViewQueue:(id)arg1;

@end
