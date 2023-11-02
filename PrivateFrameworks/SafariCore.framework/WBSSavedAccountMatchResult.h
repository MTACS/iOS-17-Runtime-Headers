
@interface WBSSavedAccountMatchResult : NSObject {
    NSArray * _associatedDomainMatches;
    NSArray * _exactMatches;
    WBSPasskeyAutoFillFromNearbyDeviceOptions * _nearbyDeviceOptions;
    NSArray * _potentialMatches;
}

@property (nonatomic, readonly, copy) NSArray *associatedDomainMatches;
@property (nonatomic, readonly, copy) NSArray *exactMatches;
@property (nonatomic, readonly, copy) WBSPasskeyAutoFillFromNearbyDeviceOptions *nearbyDeviceOptions;
@property (nonatomic, readonly, copy) NSArray *potentialMatches;

- (void).cxx_destruct;
- (void)addUniqueHostUserToMatches;
- (id)associatedDomainMatches;
- (id)debugDescription;
- (id)exactMatches;
- (id)initWithExactMatches:(id)arg1 potentialMatches:(id)arg2 associatedDomainMatches:(id)arg3 nearbyDeviceOptions:(id)arg4;
- (id)matchesForPasswordAutoFill;
- (id)nearbyDeviceOptions;
- (id)orderedMatches;
- (id)potentialMatches;

@end
