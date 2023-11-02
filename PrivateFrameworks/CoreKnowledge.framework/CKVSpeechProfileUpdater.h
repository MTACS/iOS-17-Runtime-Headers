
@interface CKVSpeechProfileUpdater : NSObject {
    CESRSpeechProfileBuilder * _builder;
    NSObject<CKVDatabaseReadOnlyAccess> * _database;
    NSString * _description;
    CKVSpeechCategoryGroup * _group;
    CKVSpeechProfileLog * _log;
}

@property (nonatomic, readonly) CESRSpeechProfileBuilder *builder;

+ (void)_removeProfileWithLog:(id)arg1 userId:(id)arg2 profileDirectory:(id)arg3;
+ (void)_updateProfileVersion:(id)arg1 withRetry:(bool)arg2 group:(id)arg3 log:(id)arg4 userId:(id)arg5 description:(id)arg6 profileDirectory:(id)arg7 protectionClass:(int)arg8 database:(id)arg9 updateType:(unsigned char)arg10;
+ (void)deleteLegacyProfiles;
+ (void)rebuildProfileWithUserId:(id)arg1 description:(id)arg2 profileDirectory:(id)arg3 protectionClass:(int)arg4 database:(id)arg5 settings:(id)arg6;
+ (void)refreshRankedItemCachesWithUserId:(id)arg1 description:(id)arg2 profileDirectory:(id)arg3 protectionClass:(int)arg4 database:(id)arg5;
+ (void)registerUpdateForItemType:(long long)arg1 originAppId:(id)arg2 fieldTypes:(id)arg3 options:(unsigned short)arg4 userId:(id)arg5 description:(id)arg6 profileDirectory:(id)arg7 protectionClass:(int)arg8 database:(id)arg9 settings:(id)arg10;
+ (void)verifyProfileWithUserId:(id)arg1 description:(id)arg2 profileDirectory:(id)arg3 protectionClass:(int)arg4 database:(id)arg5 settings:(id)arg6;

- (void).cxx_destruct;
- (void)_endSpeechProfileUpdateSignpost:(unsigned long long)arg1 updateResult:(unsigned char)arg2 updateType:(unsigned char)arg3 itemCount:(unsigned long long)arg4;
- (bool)_updateProfile:(id)arg1 withType:(unsigned char)arg2 error:(id*)arg3;
- (id)_versionForCategory:(id)arg1 error:(id*)arg2;
- (id)builder;
- (id)description;
- (id)initWithBuilder:(id)arg1 description:(id)arg2 database:(id)arg3 group:(id)arg4 log:(id)arg5;

@end
