
@interface DDUser : NSObject {
    NSString * _fullName;
    NSString * _homeDirectory;
    NSMutableArray * _memberships;
    NSString * _name;
    unsigned int  _primaryGroupID;
    NSString * _shell;
    unsigned int  _uid;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *homeDirectory;
@property (nonatomic, copy) NSMutableArray *memberships;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int primaryGroupID;
@property (nonatomic, copy) NSString *shell;
@property (nonatomic) unsigned int uid;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)userWithUUID:(id)arg1 uid:(unsigned int)arg2 name:(id)arg3 primaryGroupID:(unsigned int)arg4 fullName:(id)arg5 homeDirectory:(id)arg6 shell:(id)arg7 memberships:(id)arg8;

- (void).cxx_destruct;
- (id)fullName;
- (id)homeDirectory;
- (id)memberships;
- (id)name;
- (unsigned int)primaryGroupID;
- (void)setFullName:(id)arg1;
- (void)setHomeDirectory:(id)arg1;
- (void)setMemberships:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrimaryGroupID:(unsigned int)arg1;
- (void)setShell:(id)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (id)shell;
- (unsigned int)uid;
- (id)uuid;

@end
