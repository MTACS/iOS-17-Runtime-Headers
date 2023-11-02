
@interface HFAccessoryProfileGroup : NSObject {
    NSNumber * _groupIdentifier;
    NSArray * _profiles;
}

@property (nonatomic, readonly, copy) NSNumber *groupIdentifier;
@property (nonatomic, readonly, copy) NSArray *profiles;

+ (id)_groupIdentifierForProfile:(id)arg1 options:(id)arg2;
+ (id)_groupProfilesKeyedByIdentifier:(id)arg1 options:(id)arg2;
+ (id)_hashCombiningHashes:(id)arg1;
+ (id)groupProfiles:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)groupIdentifier;
- (id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2;
- (id)profiles;

@end
