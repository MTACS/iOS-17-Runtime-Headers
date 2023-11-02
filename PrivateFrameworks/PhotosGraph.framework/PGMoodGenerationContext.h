
@interface PGMoodGenerationContext : NSObject {
    NSMutableDictionary * _isLongTimeNoSeeByLocationUUID;
    NSMutableDictionary * _isLongTimeNoSeeByPersonLocalIdentifier;
    NSMutableDictionary * _isLongTimeNoSeeBySocialGroupUUID;
    NSDate * _longTimeNoSeeLocationLatestDate;
    NSDate * _longTimeNoSeePeopleLatestDate;
}

- (void).cxx_destruct;
- (id)initWithReferenceDate:(id)arg1;
- (bool)locationIsLongTimeNoSeeWithLocationNode:(id)arg1;
- (bool)momentIsLongTimeNoSeeForLocationWithMomentNode:(id)arg1;
- (bool)momentIsLongTimeNoSeeForPeopleWithMomentNode:(id)arg1;
- (bool)personIsLongTimeNoSeeWithPersonNode:(id)arg1;
- (bool)socialGroupIsLongTimeNoSeeWithSocialGroupNode:(id)arg1;

@end
