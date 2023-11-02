
@interface PGPeopleAssetFilter : NSObject <PGAssetFilter> {
    unsigned long long  _maximumNumberOfOtherFacesPresent;
    bool  _petFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumNumberOfOtherFacesPresent;
@property (readonly) Class superclass;

+ (id)name;
+ (bool)supportsSecureCoding;

- (bool)asset:(id)arg1 passesForPersonOrPetLocalIdentifier:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredAssetsFromAssets:(id)arg1 withPersonOrPetLocalIdentifier:(id)arg2;
- (id)initForPetWithMaximumNumberOfOtherFacesPresent:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumNumberOfOtherFacesPresent:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumNumberOfOtherFacesPresent;

@end
