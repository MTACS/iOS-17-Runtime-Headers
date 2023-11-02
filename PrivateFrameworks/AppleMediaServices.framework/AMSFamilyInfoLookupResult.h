
@interface AMSFamilyInfoLookupResult : NSObject {
    bool  _cached;
    NSArray * _familyMembers;
    NSNumber * _headOfHouseholdICloudDSID;
    bool  _headOfHouseholdSharingPayment;
}

@property (getter=isCached, nonatomic, readonly) bool cached;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSArray *familyMembers;
@property (nonatomic, readonly) NSNumber *headOfHouseholdICloudDSID;
@property (getter=isHeadOfHouseholdSharingPayment, nonatomic, readonly) bool headOfHouseholdSharingPayment;

+ (id)_familyMembersFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)familyMembers;
- (id)headOfHouseholdICloudDSID;
- (id)initWithDictionaryRepresentation:(id)arg1 cached:(bool)arg2;
- (bool)isCached;
- (bool)isHeadOfHouseholdSharingPayment;

@end
