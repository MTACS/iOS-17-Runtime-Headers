
@interface MCMContainerSchemaContext : NSObject {
    unsigned long long  _containerClass;
    MCMContainerPath * _containerPath;
    int  _dataProtectionClass;
    NSURL * _homeDirectoryURL;
    NSString * _identifier;
    MCMLibraryRepairForUser * _libraryRepair;
    unsigned short  _posixMode;
    MCMPOSIXUser * _posixOwner;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) MCMContainerPath *containerPath;
@property (nonatomic, readonly) int dataProtectionClass;
@property (nonatomic, readonly) NSURL *homeDirectoryURL;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) MCMLibraryRepairForUser *libraryRepair;
@property (nonatomic, readonly) unsigned short posixMode;
@property (nonatomic, readonly) MCMPOSIXUser *posixOwner;

+ (id)contextWithHomeDirectoryURL:(id)arg1 containerPath:(id)arg2 POSIXMode:(unsigned short)arg3 POSIXOwner:(id)arg4 containerClass:(unsigned long long)arg5 dataProtectionClass:(int)arg6 libraryRepair:(id)arg7 identifier:(id)arg8;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (id)containerPath;
- (int)dataProtectionClass;
- (id)homeDirectoryURL;
- (id)identifier;
- (id)initWithHomeDirectoryURL:(id)arg1 containerPath:(id)arg2 POSIXMode:(unsigned short)arg3 POSIXOwner:(id)arg4 containerClass:(unsigned long long)arg5 dataProtectionClass:(int)arg6 libraryRepair:(id)arg7 identifier:(id)arg8;
- (id)libraryRepair;
- (unsigned short)posixMode;
- (id)posixOwner;

@end
