
@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {
    CKContainer * _container;
    CKDatabase * _database;
}

- (void)dealloc;
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 success:(bool)arg3 error:(id)arg4 container:(id)arg5 database:(id)arg6;

@end
