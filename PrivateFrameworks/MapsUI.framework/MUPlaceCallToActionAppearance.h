
@interface MUPlaceCallToActionAppearance : MKUGCCallToActionViewAppearance {
    unsigned long long  _numberOfPhotosAdded;
    long long  _type;
}

@property (nonatomic) unsigned long long numberOfPhotosAdded;
@property (nonatomic, readonly) long long type;

+ (id)userRecommendedAppearanceForNumberOfPhotosAdded:(unsigned long long)arg1;
+ (id)userRecommendedAppearanceForRatingState:(long long)arg1;
+ (id)userRecommendedAppearanceForRatingState:(long long)arg1 numberOfPhotosAdded:(unsigned long long)arg2;
+ (id)userRecommendedLoadingAppearance;

- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfPhotosAdded;
- (void)setNumberOfPhotosAdded:(unsigned long long)arg1;
- (long long)type;

@end
