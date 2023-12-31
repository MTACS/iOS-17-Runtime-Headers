
@interface FCPersonalizationTodaySectionMapping : NSObject {
    NTPBTodaySectionsMapping * _pbTodaySectionMapping;
    NSDictionary * _todaySectionIdentifiersToFRGroupViewExposureTypes;
}

@property (nonatomic, retain) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBTodaySectionMapping:(id)arg1;
- (void)setTodaySectionIdentifiersToFRGroupViewExposureTypes:(id)arg1;
- (id)todaySectionIdentifiersToFRGroupViewExposureTypes;

@end
