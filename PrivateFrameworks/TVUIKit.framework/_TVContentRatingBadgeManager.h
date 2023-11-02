
@interface _TVContentRatingBadgeManager : NSObject {
    NSDictionary * _badgeDescriptors;
    bool  _cachesImages;
    NSCache * _imageCache;
}

@property (nonatomic, retain) NSDictionary *badgeDescriptors;
@property (nonatomic) bool cachesImages;
@property (nonatomic, retain) NSCache *imageCache;

+ (void)_addImageDescriptorToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(bool)arg5;
+ (id)_badgeDescriptorLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
+ (id)_cleanedRatingLabel:(id)arg1;
+ (id)_imageForUnknownRatingLabel:(id)arg1;
+ (id)_imageLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_badgeDescriptorForContentRating:(id)arg1;
- (id)_badgeDescriptorForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
- (id)badgeDescriptors;
- (id)badgeForContentRating:(id)arg1 drawUnknownRatingBadge:(bool)arg2;
- (id)badgeForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 drawUnknownRatingBadge:(bool)arg3;
- (bool)cachesImages;
- (id)imageCache;
- (bool)isTemplatedBadgeForContentRating:(id)arg1;
- (void)setBadgeDescriptors:(id)arg1;
- (void)setCachesImages:(bool)arg1;
- (void)setImageCache:(id)arg1;

@end
