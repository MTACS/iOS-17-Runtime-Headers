
@interface CKVSkitRebuilder : NSObject {
    CKVIndexManager * _indexManager;
    CKVLocalization * _localization;
}

+ (unsigned short)rebuildSkit:(id)arg1 database:(id)arg2 log:(id)arg3 description:(id)arg4 locale:(long long)arg5 assetPath:(id)arg6 shouldDefer:(id /* block */)arg7;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2;
- (bool)rebuildForUser:(id)arg1;

@end
