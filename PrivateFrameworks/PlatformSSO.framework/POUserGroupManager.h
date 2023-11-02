
@interface POUserGroupManager : NSObject {
    NSURL * _filePath;
}

@property (nonatomic, retain) NSURL *filePath;

- (void).cxx_destruct;
- (id)_nextAvailableUserId:(id)arg1;
- (id)createOrUpdateUser:(id)arg1 withError:(id*)arg2;
- (id)filePath;
- (id)findUser:(id)arg1 withError:(id*)arg2;
- (id)getAllUsersWithError:(id*)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)loadUsers_lockedWithError:(id*)arg1;
- (bool)removeUserWithName:(id)arg1 withError:(id*)arg2;
- (bool)saveUsers_locked:(id)arg1 withError:(id*)arg2;
- (void)setFilePath:(id)arg1;

@end
