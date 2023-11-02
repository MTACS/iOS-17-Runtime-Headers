
@interface CMSError : NSObject

+ (id)_descriptionForErrorCode:(long long)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;

@end
