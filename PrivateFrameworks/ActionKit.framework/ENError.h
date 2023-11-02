
@interface ENError : NSObject

+ (id)connectionFailedError;
+ (id)errorFromException:(id)arg1;
+ (id)localizedDescriptionForENErrorCode:(long long)arg1;
+ (id)noteSizeLimitReachedError;
+ (long long)sanitizedErrorCodeFromEDAMErrorCode:(int)arg1;

@end
