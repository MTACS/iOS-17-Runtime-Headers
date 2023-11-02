
@interface OSASafeCreateDirectoryOptions : NSObject {
    bool  _createIntermediates;
    bool  _fileProtectionNone;
    NSNumber * _groupID;
    NSNumber * _userID;
}

@property bool createIntermediates;
@property bool fileProtectionNone;
@property (copy) NSNumber *groupID;
@property (copy) NSNumber *userID;

- (void).cxx_destruct;
- (bool)createIntermediates;
- (bool)fileProtectionNone;
- (id)groupID;
- (void)setCreateIntermediates:(bool)arg1;
- (void)setFileProtectionNone:(bool)arg1;
- (void)setGroupID:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;

@end
