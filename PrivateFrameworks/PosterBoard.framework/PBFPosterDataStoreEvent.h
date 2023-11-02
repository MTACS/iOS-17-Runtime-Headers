
@interface PBFPosterDataStoreEvent : NSObject {
    NSString * _eventType;
    id  _fromValue;
    PBFPosterRoleCoordinatorChange * _originatingRoleCoordinatorChange;
    NSSet * _relatedPosters;
    NSSet * _relatedProviders;
    id /* block */  _revertBlock;
    id  _toValue;
    NSUUID * _uniqueIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) bool couldRevert;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, retain) id fromValue;
@property (nonatomic, retain) PBFPosterRoleCoordinatorChange *originatingRoleCoordinatorChange;
@property (nonatomic, copy) NSSet *relatedPosters;
@property (nonatomic, copy) NSSet *relatedProviders;
@property (nonatomic, copy) id /* block */ revertBlock;
@property (nonatomic, retain) id toValue;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (bool)couldRevert;
- (id)description;
- (void)dumpLongDescriptionWithPreamble:(id)arg1 log:(id)arg2 type:(unsigned char)arg3;
- (id)eventType;
- (id)fromValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEvent:(id)arg1;
- (bool)isValidWithError:(out id*)arg1;
- (id)originatingRoleCoordinatorChange;
- (id)relatedPosters;
- (id)relatedProviders;
- (bool)revert;
- (id /* block */)revertBlock;
- (void)setFromValue:(id)arg1;
- (void)setOriginatingRoleCoordinatorChange:(id)arg1;
- (void)setRelatedPosters:(id)arg1;
- (void)setRelatedProviders:(id)arg1;
- (void)setRevertBlock:(id /* block */)arg1;
- (void)setToValue:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)toValue;
- (id)uniqueIdentifier;
- (id)userInfo;

@end
