
@interface DeviceModelCoderContainer : NSObject <HomePodSettings.DeviceModelMessaging> {
    void groupID;
    void groupName;
    void model;
    void name;
    void pairID;
    void pairName;
    void roomID;
    void roomName;
}

@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *pairID;
@property (nonatomic, copy) NSString *pairName;
@property (nonatomic, copy) NSString *roomID;
@property (nonatomic, copy) NSString *roomName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)groupName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (id)pairID;
- (id)pairName;
- (id)roomID;
- (id)roomName;
- (void)setGroupID:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairID:(id)arg1;
- (void)setPairName:(id)arg1;
- (void)setRoomID:(id)arg1;
- (void)setRoomName:(id)arg1;

@end
