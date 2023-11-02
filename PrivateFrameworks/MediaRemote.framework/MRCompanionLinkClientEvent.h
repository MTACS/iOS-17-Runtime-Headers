
@interface MRCompanionLinkClientEvent : NSObject {
    NSString * _destination;
    NSString * _eventID;
    NSString * _uid;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *destination;
@property (nonatomic, retain) NSString *eventID;
@property (nonatomic, retain) NSString *uid;
@property (nonatomic, retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)destination;
- (id)eventID;
- (void)setDestination:(id)arg1;
- (void)setEventID:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)uid;
- (id)userInfo;

@end
