
@interface CKPrettyError : NSError

+ (id)combinedErrorFromErrors:(id)arg1 topLevelErrorMessage:(id)arg2;
+ (id)databaseCorruptError;
+ (id)descriptionForError:(id)arg1;
+ (id)errorForSQLite:(struct sqlite3 { }*)arg1 message:(id)arg2;
+ (id)errorForSQLite:(struct sqlite3 { }*)arg1 message:(id)arg2 args:(char *)arg3;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 format:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3 format:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 error:(id)arg3 URL:(id)arg4 format:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 error:(id)arg3 format:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 error:(id)arg3 path:(id)arg4 format:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 error:(id)arg4 format:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 error:(id)arg4 format:(id)arg5 arguments:(char *)arg6;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 error:(id)arg4 path:(id)arg5 URL:(id)arg6 description:(id)arg7;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 format:(id)arg4;
+ (void)initialize;
+ (id)itemErrorFromError:(id)arg1 forID:(id)arg2;
+ (id)secureCodableError:(id)arg1;
+ (id)undeprecatedDescriptionForError:(id)arg1;

- (id)CKPartialErrorDescription;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;

@end
