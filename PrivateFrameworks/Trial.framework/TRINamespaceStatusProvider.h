
@interface TRINamespaceStatusProvider : NSObject {
    <TRIPaths> * _paths;
}

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

- (void).cxx_destruct;
- (bool)deleteStatusForNamespaceWithName:(id)arg1;
- (id)initWithPaths:(id)arg1;
- (id)loadNamespaceStatusFromURL:(id)arg1;
- (bool)saveNamespaceStatus:(id)arg1 toURL:(id)arg2;
- (bool)saveStatus:(id)arg1;
- (id)statusForNamespaceWithName:(id)arg1;
- (bool)updateStatusForNamespaceWithName:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)urlForStatusWithNamespaceName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (bool)updateStatusFetchSuccess:(bool)arg1 forNamespaceName:(id)arg2 withContext:(id)arg3;

@end
