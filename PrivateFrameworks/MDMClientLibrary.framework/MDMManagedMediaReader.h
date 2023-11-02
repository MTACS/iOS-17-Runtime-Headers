
@interface MDMManagedMediaReader : NSObject

// Image: /System/Library/PrivateFrameworks/MDMClientLibrary.framework/MDMClientLibrary

+ (id)attributesByAppID;
+ (id)managedAppIDs;
+ (id)managedAppIDsWithFlags:(unsigned long long)arg1;
+ (id)managedBooks;

// Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider

+ (id)managedAppsUninstalledOnMDMRemoval;

@end
