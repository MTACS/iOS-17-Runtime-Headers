
@interface PBFPosterConfigurationStoreArchiver : NSObject

+ (id)_unarchiveWithHandler:(id /* block */)arg1 manifest:(out id*)arg2 error:(out id*)arg3;
+ (id)archiveConfigurationStoreWithCoordinator:(id)arg1 error:(out id*)arg2;
+ (long long)minSupportedArchiveVersion;
+ (id)unarchiveConfigurationStoreArchiveAtURL:(id)arg1 manifest:(out id*)arg2 error:(out id*)arg3;
+ (id)unarchiveConfigurationStoreArchiveData:(id)arg1 manifest:(out id*)arg2 error:(out id*)arg3;

@end
