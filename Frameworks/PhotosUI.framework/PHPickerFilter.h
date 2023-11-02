
@interface PHPickerFilter : NSObject <NSCopying> {
    <PUPickerFilter> * __puPickerFilter;
}

@property (nonatomic, readonly) <PUPickerFilter> *_puPickerFilter;

+ (id)_stickersFilter;
+ (id)allFilterMatchingSubfilters:(id)arg1;
+ (id)anyFilterMatchingSubfilters:(id)arg1;
+ (id)burstsFilter;
+ (id)cinematicVideosFilter;
+ (id)depthEffectPhotosFilter;
+ (id)imagesFilter;
+ (id)livePhotosFilter;
+ (id)notFilterOfSubfilter:(id)arg1;
+ (id)panoramasFilter;
+ (id)playbackStyleFilter:(long long)arg1;
+ (id)screenRecordingsFilter;
+ (id)screenshotsFilter;
+ (id)slomoVideosFilter;
+ (id)timelapseVideosFilter;
+ (id)videosFilter;

- (void).cxx_destruct;
- (id)_initWithPUPickerFilter:(id)arg1;
- (id)_puPickerFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
