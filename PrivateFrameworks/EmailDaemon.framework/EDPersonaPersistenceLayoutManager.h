
@interface EDPersonaPersistenceLayoutManager : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)baseAccountDirectoryForPersonaIdentifier:(id)arg1;
+ (id)baseAccountDirectoryPathForPersonaIdentifier:(id)arg1;
+ (id)iOS_baseAccountDirectoryPathForPersonaIdentifier:(id)arg1;
+ (id)log;
+ (id)macOS_baseAccountDirectoryPathForPersonaIdentifier:(id)arg1;

@end
