
@interface PRSPosterArchiver : NSObject {
    NSFileManager * _fileManager;
    BSProcessHandle * _processHandle;
}

@property (nonatomic, retain) NSFileManager *fileManager;
@property (nonatomic, retain) BSProcessHandle *processHandle;

+ (id)archiveConfiguration:(id)arg1 error:(out id*)arg2;
+ (id)archiveConfiguration:(id)arg1 format:(long long)arg2 error:(out id*)arg3;
+ (id)archiveExtensionForFormat:(long long)arg1;
+ (long long)formatForData:(id)arg1;
+ (long long)formatForDataAtURL:(id)arg1;
+ (long long)minSupportedArchiveVersion;
+ (id)unarchiveConfigurationAtURL:(id)arg1 error:(out id*)arg2;
+ (id)unarchiveConfigurationAtURL:(id)arg1 format:(long long)arg2 error:(out id*)arg3;
+ (id)unarchiveConfigurationFromData:(id)arg1 error:(out id*)arg2;
+ (id)unarchiveConfigurationFromData:(id)arg1 format:(long long)arg2 error:(out id*)arg3;

- (void).cxx_destruct;
- (id)_unarchiveWithHandler:(id /* block */)arg1 manifest:(out id*)arg2 error:(out id*)arg3;
- (id)archiveConfiguration:(id)arg1 error:(out id*)arg2;
- (id)archiveConfiguration:(id)arg1 format:(long long)arg2 error:(out id*)arg3;
- (id)fileManager;
- (id)init;
- (id)initWithFileManager:(id)arg1;
- (id)initWithFileManager:(id)arg1 processHandle:(id)arg2;
- (id)processHandle;
- (void)setFileManager:(id)arg1;
- (void)setProcessHandle:(id)arg1;
- (id)unarchiveConfigurationAppleArchiveAtURL:(id)arg1 manifest:(out id*)arg2 error:(out id*)arg3;
- (id)unarchiveConfigurationAppleArchiveData:(id)arg1 manifest:(out id*)arg2 error:(out id*)arg3;
- (id)unarchiveConfigurationAtURL:(id)arg1 error:(out id*)arg2;
- (id)unarchiveConfigurationAtURL:(id)arg1 format:(long long)arg2 error:(out id*)arg3;
- (id)unarchiveConfigurationFromData:(id)arg1 error:(out id*)arg2;
- (id)unarchiveConfigurationFromData:(id)arg1 format:(long long)arg2 error:(out id*)arg3;
- (id)unarchiveConfigurationZipArchiveAtURL:(id)arg1 manifest:(out id*)arg2 error:(out id*)arg3;
- (id)unarchiveConfigurationZipArchiveData:(id)arg1 manifest:(out id*)arg2 error:(out id*)arg3;

@end
