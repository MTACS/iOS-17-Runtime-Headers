
@interface UMLSideEffects : NSObject {
    NSObject<UMAppleKeyStoreProviding> * _aks;
    NSObject<UMFilesystemProviding> * _filesystem;
}

- (void).cxx_destruct;

@end
