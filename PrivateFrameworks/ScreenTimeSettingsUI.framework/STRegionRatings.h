
@interface STRegionRatings : NSObject {
    NSDictionary * _regionRatingsData;
}

@property (readonly, copy) NSArray *localizedRegionAndCodePairs;
@property (readonly, copy) NSDictionary *localizedRegionsByCode;
@property (readonly, copy) NSString *preferredRegion;
@property (nonatomic, retain) NSDictionary *regionRatingsData;

+ (void)loadRegionRatingsWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedRatings;

- (void).cxx_destruct;
- (id)_localizedLabelForRegion:(id)arg1 rating:(id)arg2;
- (id)_localizedRatingsForRegion:(id)arg1 type:(id)arg2 allContentKey:(id)arg3 noContentKey:(id)arg4;
- (id)_overrideValueForString:(id)arg1;
- (id)getClosestRestrictionMatch:(id)arg1 within:(id)arg2;
- (id)getRatingSystemTypeFrom:(id)arg1;
- (void)loadRegionRatingsDataWithCompletionHandler:(id /* block */)arg1;
- (id)localizedAppRatingsForRegion:(id)arg1;
- (id)localizedMovieRatingsForRegion:(id)arg1;
- (id)localizedRegionAndCodePairs;
- (id)localizedRegionsByCode;
- (id)localizedStringForAppRatingLabel:(id)arg1;
- (id)localizedTVRatingsForRegion:(id)arg1;
- (id)preferredRegion;
- (id)regionRatingsData;
- (void)setRegionRatingsData:(id)arg1;

@end
