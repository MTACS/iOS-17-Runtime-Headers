
@interface HMDNameValidator : HMFObject {
    NSUUID * _homeManagerUUID;
    NSMutableDictionary * _namespaceList;
    NSPredicate * _nonZeroLengthPredicate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSUUID *homeManagerUUID;
@property (nonatomic, retain) NSMutableDictionary *namespaceList;
@property (nonatomic, retain) NSPredicate *nonZeroLengthPredicate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)_addName:(id)arg1 namespace:(id)arg2;
- (id)_addNamespace:(id)arg1;
- (id)_checkForConflict:(id)arg1 namespace:(id)arg2;
- (id)_removeName:(id)arg1 namespace:(id)arg2;
- (id)_removeNamespace:(id)arg1;
- (id)_replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)_validateName:(id)arg1;
- (id)addActionSetName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2 voiceShortcutCheck:(bool)arg3;
- (id)addNamespace:(id)arg1;
- (id)checkForConflict:(id)arg1 namespace:(id)arg2;
- (id)despaceName:(id)arg1;
- (id)homeManagerUUID;
- (id)initWithUUID:(id)arg1;
- (id)namespaceList;
- (id)nonZeroLengthPredicate;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)removeNamespace:(id)arg1;
- (id)replaceActionSetName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 voiceShortcutCheck:(bool)arg4;
- (void)setHomeManagerUUID:(id)arg1;
- (void)setNamespaceList:(id)arg1;
- (void)setNonZeroLengthPredicate:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)trimNotAllowedCharactersFromName:(id)arg1 error:(id*)arg2;
- (id)validateName:(id)arg1;
- (id)workQueue;

@end
