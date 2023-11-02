
@interface AXPhoenixDataPackager : NSObject {
    NSArray * _allowedFileSuffixes;
    NSString * _dataDirectory;
}

@property (nonatomic, retain) NSArray *allowedFileSuffixes;
@property (nonatomic, retain) NSString *dataDirectory;

- (void).cxx_destruct;
- (id)_archiveDirectory:(id)arg1;
- (id)_buildPackageDirectoryNameFromFilename:(id)arg1 withMetadata:(id)arg2;
- (id)_createPackageDirectory:(id)arg1 withPackageDirectoryName:(id)arg2;
- (id)_getDataForSubsession:(id)arg1;
- (id)allowedFileSuffixes;
- (id)dataDirectory;
- (id)initWithFileSuffixes:(id)arg1 fromDataDirectory:(id)arg2;
- (bool)isValidFile:(id)arg1;
- (id)packageDataUsingFiles:(id)arg1;
- (void)setAllowedFileSuffixes:(id)arg1;
- (void)setDataDirectory:(id)arg1;

@end
