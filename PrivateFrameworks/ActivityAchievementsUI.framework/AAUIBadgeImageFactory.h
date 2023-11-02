
@interface AAUIBadgeImageFactory : NSObject {
    NSMutableDictionary * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    AAUIBadgeView * _earnedBadgeView;
    NSObject<OS_dispatch_queue> * _imageCreationQueue;
    AAUIAchievementResourceProvider * _resourceProvider;
    AAUIBadgeView * _unearnedBadgeView;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } cacheLock;
@property (nonatomic, retain) AAUIBadgeView *earnedBadgeView;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *imageCreationQueue;
@property (nonatomic, retain) AAUIAchievementResourceProvider *resourceProvider;
@property (nonatomic, retain) AAUIBadgeView *unearnedBadgeView;

- (void).cxx_destruct;
- (id)_availableAchievementsForStackType:(int)arg1 andAchievements:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialFrameForSize:(struct CGSize { double x1; double x2; })arg1 isRTL:(bool)arg2 isStack:(bool)arg3;
- (id)_makeGradientImage:(id)arg1 solidGradient:(struct CGGradient { }*)arg2 gradient:(struct CGGradient { }*)arg3 isRTL:(bool)arg4;
- (struct CGGradient { }*)_makeShadowGradient;
- (struct CGGradient { }*)_makeShadowSolidGradient;
- (id)_perfectCropForImage:(id)arg1 andDirections:(unsigned long long)arg2;
- (id)_queue_generateImageForConfiguration:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 stackType:(int)arg3 isRTL:(bool)arg4 unearned:(bool)arg5;
- (id)_queue_thumbnailImageForAchievements:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 alignment:(int)arg3 stackType:(int)arg4;
- (double)_stackBadgeOverlapForStackType:(int)arg1;
- (id)cache;
- (struct os_unfair_lock_s { unsigned int x1; })cacheLock;
- (void)clearAllCachedImages;
- (id)earnedBadgeView;
- (bool)hasCachedThumbnailImageForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)hasCachedThumbnailImageForAchievements:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 alignment:(int)arg3;
- (bool)hasCachedThumbnailImageForAchievements:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 alignment:(int)arg3 stackType:(int)arg4;
- (id)imageCreationQueue;
- (id)init;
- (id)resourceProvider;
- (void)setCache:(id)arg1;
- (void)setCacheLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setEarnedBadgeView:(id)arg1;
- (void)setImageCreationQueue:(id)arg1;
- (void)setResourceProvider:(id)arg1;
- (void)setUnearnedBadgeView:(id)arg1;
- (id)thumbnailImageForAchievement:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)thumbnailImageForAchievements:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 alignment:(int)arg3;
- (id)thumbnailImageForAchievements:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 alignment:(int)arg3 stackType:(int)arg4;
- (id)unearnedBadgeView;

@end
