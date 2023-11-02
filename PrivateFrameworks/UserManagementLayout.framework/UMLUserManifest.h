
@interface UMLUserManifest : NSObject {
    long long  _apnsIDStart;
    int  _deviceConfig;
    NSString * _fsVolumeType;
    unsigned long long  _generation;
    int  _lastBootedUser;
    int  _loginuiCheck;
    NSMutableArray * _lruList;
    long long  _maxUserSize;
    int  _maxUsers;
    int  _networkBG;
    NSMutableArray * _syncUserList;
    int  _userSessionType;
    NSMutableArray * _users;
    int  _version;
}

@property (nonatomic) long long apnsIDStart;
@property (nonatomic, readonly) NSData *dataValue;
@property (nonatomic) int deviceConfig;
@property (nonatomic, copy) NSString *fsVolumeType;
@property (nonatomic) unsigned long long generation;
@property (nonatomic) int lastBootedUser;
@property (nonatomic) int loginuiCheck;
@property (nonatomic, copy) NSMutableArray *lruList;
@property (nonatomic) long long maxUserSize;
@property (nonatomic) int maxUsers;
@property (nonatomic) int networkBG;
@property (nonatomic, copy) NSMutableArray *syncUserList;
@property (nonatomic) int userSessionType;
@property (nonatomic, copy) NSMutableArray *users;
@property (nonatomic) int version;

+ (id)manifestFromData:(id)arg1;

- (void).cxx_destruct;
- (long long)apnsIDStart;
- (id)dataValue;
- (int)deviceConfig;
- (id)fsVolumeType;
- (unsigned long long)generation;
- (id)init;
- (int)lastBootedUser;
- (int)loginuiCheck;
- (id)lruList;
- (long long)maxUserSize;
- (int)maxUsers;
- (int)networkBG;
- (void)setApnsIDStart:(long long)arg1;
- (void)setDeviceConfig:(int)arg1;
- (void)setFsVolumeType:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setLastBootedUser:(int)arg1;
- (void)setLoginuiCheck:(int)arg1;
- (void)setLruList:(id)arg1;
- (void)setMaxUserSize:(long long)arg1;
- (void)setMaxUsers:(int)arg1;
- (void)setNetworkBG:(int)arg1;
- (void)setSyncUserList:(id)arg1;
- (void)setUserSessionType:(int)arg1;
- (void)setUsers:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)syncUserList;
- (int)userSessionType;
- (id)users;
- (int)version;

@end
