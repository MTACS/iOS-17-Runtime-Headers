
@interface PGSocialGroupAssetFilter : NSObject <PGAssetFilter> {
    double  _minimumRatioOfFacesComingFromSocialGroup;
    double  _minimumRatioOfPersonsInSocialGroupPresent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimumRatioOfFacesComingFromSocialGroup;
@property (nonatomic, readonly) double minimumRatioOfPersonsInSocialGroupPresent;
@property (readonly) Class superclass;

+ (id)criteriaWithDictionary:(id)arg1;
+ (id)name;
+ (bool)supportsSecureCoding;

- (bool)asset:(id)arg1 passesForPersonLocalIdentifiersInSocialGroup:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredAssetsFromAssets:(id)arg1 withPersonLocalIdentifiersInSocialGroup:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)minimumRatioOfFacesComingFromSocialGroup;
- (double)minimumRatioOfPersonsInSocialGroupPresent;

@end
