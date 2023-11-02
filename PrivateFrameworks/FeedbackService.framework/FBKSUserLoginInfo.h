
@interface FBKSUserLoginInfo : NSObject {
    FBKSCustomBehavior * _behavior;
    NSString * _deviceToken;
    NSString * _familyName;
    NSString * _givenName;
    bool  _isSystemAccount;
    NSNumber * _participantID;
    NSArray * _pendingConsents;
    NSString * _username;
}

@property (nonatomic, retain) FBKSCustomBehavior *behavior;
@property (nonatomic, retain) NSString *deviceToken;
@property (nonatomic, retain) NSString *familyName;
@property (nonatomic, retain) NSString *givenName;
@property (nonatomic) bool isSystemAccount;
@property (nonatomic, retain) NSNumber *participantID;
@property (nonatomic, retain) NSArray *pendingConsents;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)behavior;
- (id)description;
- (id)deviceToken;
- (id)familyName;
- (id)givenName;
- (id)initWithDictionary:(id)arg1;
- (bool)isSystemAccount;
- (id)participantID;
- (id)pendingConsents;
- (void)saveDeviceTokenLookupInformation;
- (void)setBehavior:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setIsSystemAccount:(bool)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPendingConsents:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
