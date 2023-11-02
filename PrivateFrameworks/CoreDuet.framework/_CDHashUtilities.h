
@interface _CDHashUtilities : NSObject

+ (id)hexStringFromData:(id)arg1;
+ (id)md5ForData:(id)arg1;
+ (id)md5ForObjectDescription:(id)arg1;
+ (id)md5ForString:(id)arg1;
+ (id)md5forDictionary:(id)arg1 error:(id*)arg2;
+ (id)sha1ForData:(id)arg1;
+ (id)sha1ForString:(id)arg1;
+ (id)sha256Hash:(id)arg1 withSalt:(id)arg2;

@end
