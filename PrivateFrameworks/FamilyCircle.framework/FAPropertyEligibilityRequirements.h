
@interface FAPropertyEligibilityRequirements : NSObject <NSSecureCoding> {
    NSArray * _activeBundleIDs;
    NSString * _expectedMediaAltDSID;
    bool  _hasRecommendedMembers;
    NSString * _propertyName;
    bool  _serverEligibility;
    id  _serverPayload;
}

@property (nonatomic, readonly, copy) NSArray *activeBundleIDs;
@property (nonatomic, readonly, copy) NSString *expectedMediaAltDSID;
@property (nonatomic, readonly) bool hasRecommendedMembers;
@property (nonatomic, readonly, copy) NSString *propertyName;
@property (nonatomic, readonly) bool serverEligibility;
@property (nonatomic, readonly) id serverPayload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeBundleIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedMediaAltDSID;
- (bool)hasRecommendedMembers;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyName:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithPropertyName:(id)arg1 hasRecommendedMembers:(bool)arg2 expectedMediaAltDSID:(id)arg3 serverEligibility:(bool)arg4 activeBundleIDs:(id)arg5 serverPayload:(id)arg6;
- (id)propertyName;
- (bool)serverEligibility;
- (id)serverPayload;

@end
