
@interface EDAMIdentity : FATObject {
    NSNumber * _blocked;
    EDAMContact * _contact;
    NSNumber * _deactivated;
    NSNumber * _eventId;
    NSNumber * _id;
    NSNumber * _sameBusiness;
    NSNumber * _userConnected;
    NSNumber * _userId;
}

@property (nonatomic, retain) NSNumber *blocked;
@property (nonatomic, retain) EDAMContact *contact;
@property (nonatomic, retain) NSNumber *deactivated;
@property (nonatomic, retain) NSNumber *eventId;
@property (nonatomic, retain) NSNumber *id;
@property (nonatomic, retain) NSNumber *sameBusiness;
@property (nonatomic, retain) NSNumber *userConnected;
@property (nonatomic, retain) NSNumber *userId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)blocked;
- (id)contact;
- (id)deactivated;
- (id)eventId;
- (id)id;
- (id)sameBusiness;
- (void)setBlocked:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDeactivated:(id)arg1;
- (void)setEventId:(id)arg1;
- (void)setId:(id)arg1;
- (void)setSameBusiness:(id)arg1;
- (void)setUserConnected:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userConnected;
- (id)userId;

@end
