
@interface CNPRSPosterArchiver : NSObject

+ (id)archiveCNConfiguration:(id)arg1 error:(out id*)arg2;
+ (id)unarchiveCNConfigurationAtURL:(id)arg1 error:(out id*)arg2;
+ (id)unarchiveCNConfigurationFromData:(id)arg1 error:(out id*)arg2;

@end
