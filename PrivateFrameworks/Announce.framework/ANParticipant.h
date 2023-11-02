
@interface ANParticipant : NSObject <ANCompanionMessage, NSSecureCoding> {
    NSString * _homeKitID;
    NSString * _homeKitUserID;
    NSString * _idsID;
    bool  _isAccessory;
    bool  _isEndpoint;
    NSString * _name;
    NSString * _rapportID;
    NSString * _userID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *homeKitID;
@property (nonatomic, retain) NSString *homeKitUserID;
@property (nonatomic, retain) NSString *idsID;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic) bool isAccessory;
@property (nonatomic) bool isEndpoint;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *rapportID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userID;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearIdentifiers;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKitID;
- (id)homeKitUserID;
- (id)idsID;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithSender:(id)arg1;
- (bool)isAccessory;
- (bool)isEndpoint;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)messageForCompanion;
- (id)name;
- (id)rapportID;
- (void)setHomeKitID:(id)arg1;
- (void)setHomeKitUserID:(id)arg1;
- (void)setIdsID:(id)arg1;
- (void)setIsAccessory:(bool)arg1;
- (void)setIsEndpoint:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRapportID:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

+ (id)participantsFromUsersInHome:(id)arg1;

- (id)initWithAccessory:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 andAccessory:(id)arg2;
- (id)nameInHome:(id)arg1;
- (void)populateWithAccessory:(id)arg1;
- (void)populateWithDevice:(id)arg1;
- (void)populateWithUser:(id)arg1;
- (void)populateWithUser:(id)arg1 andAccessory:(id)arg2;

@end
