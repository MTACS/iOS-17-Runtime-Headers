
@protocol SBApplicationSupportServiceRequestPersistenceIdentifierProvider <NSObject>

@required

- (NSOrderedSet *)_persistenceIdentifiersForBundleIdentifier:(NSString *)arg1 onlyIncludeLaunchableIdentifiers:(bool)arg2;

@end
