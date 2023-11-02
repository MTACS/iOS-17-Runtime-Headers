
@interface EDMessageDataLayoutManager : NSObject

+ (id)messageDataDirectoryURLForGlobalMessageID:(long long)arg1 basePath:(id)arg2 purgeable:(bool)arg3;
+ (id)messageDataDirectoryURLForGlobalMessageID:(long long)arg1 rootMessageDataDirectory:(id)arg2;
+ (id)rootMessageDataDirectoryForBasePath:(id)arg1 purgeable:(bool)arg2;

@end
