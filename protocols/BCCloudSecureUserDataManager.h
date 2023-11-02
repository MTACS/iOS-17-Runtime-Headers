
@protocol BCCloudSecureUserDataManager <NSObject>

@required

- (void)currentCloudSyncVersions:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableCloudSyncVersions *, void*
- (void)deleteUserDatumForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchUserDataIncludingDeleted:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BCMutableCloudSyncVersions *, NSError *, void*
- (void)getUserDataChangesSince:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: BCMutableCloudSyncVersions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, bool, void*
- (void)resolvedUserDataValueForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)setUserData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)setUserDataValue:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUserDatum:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: <BCSecureUserDatum> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)userDataValueForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)userDatumForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableSecureUserDatum *, NSError *, void*
- (void)userDatumIncludingDeleted:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableSecureUserDatum *, NSError *, void*

@end
