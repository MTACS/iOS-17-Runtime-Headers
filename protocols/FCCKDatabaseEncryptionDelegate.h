
@protocol FCCKDatabaseEncryptionDelegate <NSObject>

@required

- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: FCCKPrivateDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: FCCKPrivateDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchPrivateDataEncryptionIsRequiredForDatabase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: FCCKPrivateDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: FCCKPrivateDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchShouldSecureSubscriptionsForDatabase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: FCCKPrivateDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
