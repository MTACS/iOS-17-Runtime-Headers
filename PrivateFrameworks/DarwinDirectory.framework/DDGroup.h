
@interface DDGroup : NSObject {
    NSString * _fullName;
    unsigned int  _gid;
    NSString * _name;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) unsigned int gid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)groupWithUUID:(id)arg1 gid:(unsigned int)arg2 name:(id)arg3 fullName:(id)arg4;

- (void).cxx_destruct;
- (id)fullName;
- (unsigned int)gid;
- (id)name;
- (void)setFullName:(id)arg1;
- (void)setGid:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
