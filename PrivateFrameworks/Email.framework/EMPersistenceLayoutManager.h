
@interface EMPersistenceLayoutManager : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_nonContainerizedBaseMailDirectoryPathCreated:(bool*)arg1;
+ (id)baseMailDirectory;
+ (id)baseMailDirectoryPath;
+ (id)log;
+ (id)mailAccountDirectory;
+ (id)mailAccountDirectoryPath;
+ (id)mailDataDirectory;
+ (id)mailDataDirectoryPath;

@end
