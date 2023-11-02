
@interface PBFPosterRoleCoordinatorChange : NSObject {
    NSString * _changeType;
    NSString * _role;
    NSUUID * _uniqueIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *changeType;
@property (nonatomic, readonly, copy) NSString *role;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)addPosterToRole:(id)arg1 incomingPoster:(id)arg2;
+ (id)assignAttributeToPosterWithinRole:(id)arg1 matchingUUID:(id)arg2 attribute:(id)arg3;
+ (id)distillArrayOfChangesIntoChangesOrderedByPosterRoleEntropy:(id)arg1;
+ (id)duplicatePosterWithinRole:(id)arg1 matchingUUID:(id)arg2 toUUID:(id)arg3;
+ (id)refreshRoleCoordinator:(id)arg1;
+ (id)removeAttributeFromPosterWithinRole:(id)arg1 matchingUUID:(id)arg2 attributeType:(id)arg3;
+ (id)removePosterFromRole:(id)arg1 matchingUUID:(id)arg2;
+ (id)reorderPostersForRole:(id)arg1 sortedPosterUUIDs:(id)arg2;
+ (id)resetRole:(id)arg1;
+ (id)selectPosterForRole:(id)arg1 matchingUUID:(id)arg2;
+ (id)updateConfiguredProperties:(id)arg1 forPosterWithinRole:(id)arg2 matchingUUID:(id)arg3;
+ (id)updatePosterWithinRole:(id)arg1 incomingPoster:(id)arg2;

- (void).cxx_destruct;
- (id)changeType;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 role:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChange:(id)arg1;
- (bool)isValidWithError:(out id*)arg1;
- (id)role;
- (id)uniqueIdentifier;
- (id)userInfo;

@end
