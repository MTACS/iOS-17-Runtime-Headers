
@interface IMDCKDatabaseManager : NSObject {
    CKContainer * _manateeContainer;
    CKContainer * _nickNameContainer;
}

@property (nonatomic, readonly) CKContainer *manateeContainer;
@property (nonatomic, readonly) CKContainer *nickNameContainer;
@property (nonatomic, readonly) CKContainer *truthContainer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (bool)_serverSaysToUseOldContainer;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)arg1;
- (id)init;
- (id)manateeContainer;
- (id)manateeDataBase;
- (id)nickNameContainer;
- (id)nickNamePublicDatabase;
- (id)truthContainer;
- (id)truthDatabase;
- (id)truthPublicDatabase;

@end
