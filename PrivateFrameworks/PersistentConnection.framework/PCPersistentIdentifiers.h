
@interface PCPersistentIdentifiers : NSObject

+ (id)_processNamePrefix;
+ (unsigned long long)hostUniqueIdentifier;
+ (int)pidFromMatchingIdentifer:(id)arg1;
+ (id)processNameAndPidIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)arg1;

@end
