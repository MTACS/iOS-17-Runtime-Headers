
@interface PBFPosterDataStoreEventBuilder : NSObject {
    NSString * _eventType;
    id  _fromValue;
    PBFPosterRoleCoordinatorChange * _originatingRoleCoordinatorChange;
    NSMutableSet * _relatedPosters;
    NSMutableSet * _relatedProviders;
    NSMutableSet * _relatedRoles;
    id /* block */  _revertBlock;
    id  _toValue;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, retain) id fromValue;
@property (nonatomic, retain) PBFPosterRoleCoordinatorChange *originatingRoleCoordinatorChange;
@property (nonatomic, copy) id /* block */ revertBlock;
@property (nonatomic, retain) id toValue;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)activeChargerIdentifierDidUpdate:(id)arg1 from:(id)arg2;
+ (id)descriptorsUpdatedForProvider:(id)arg1 role:(id)arg2 from:(id)arg3 to:(id)arg4;
+ (id)extensionsUpdatedFrom:(id)arg1 to:(id)arg2 supportedRoles:(id)arg3;
+ (id)posterActivated:(id)arg1 previous:(id)arg2;
+ (id)posterAdded:(id)arg1;
+ (id)posterDeleted:(id)arg1;
+ (id)posterSelected:(id)arg1 previous:(id)arg2;
+ (id)posterUpdatedFrom:(id)arg1 to:(id)arg2;
+ (id)postersReorderedFrom:(id)arg1 to:(id)arg2;
+ (id)resetRole:(id)arg1;
+ (id)staticDescriptorsUpdatedForProvider:(id)arg1 role:(id)arg2 from:(id)arg3 to:(id)arg4;

- (void).cxx_destruct;
- (id)buildWithError:(out id*)arg1;
- (id)eventType;
- (id)fromValue;
- (id)originatingRoleCoordinatorChange;
- (void)relatePoster:(id)arg1;
- (void)relateProvider:(id)arg1;
- (void)reset;
- (id /* block */)revertBlock;
- (void)setEventType:(id)arg1;
- (void)setFromValue:(id)arg1;
- (void)setOriginatingRoleCoordinatorChange:(id)arg1;
- (void)setRevertBlock:(id /* block */)arg1;
- (void)setToValue:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)toValue;
- (void)unrelatePoster:(id)arg1;
- (void)unrelateProvider:(id)arg1;
- (id)userInfo;

@end
