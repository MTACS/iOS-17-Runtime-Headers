
@interface GEOFilePathsPrivate : NSObject

+ (id)daemonContainerCachesPathUsingLibSystem;
+ (id)daemonContainerLibraryPathUsingLibSystem;
+ (id)daemonContainerPathUsingLibSystem;
+ (id)pathForSearchPath:(int)arg1 andDomain:(int)arg2;
+ (id)systemContainerCachesPathUsingLibSystem;
+ (id)systemContainerLibraryPathUsingLibSystem;
+ (id)systemContainerPathUsingLibSystem;
+ (id)userContainerCachesPathUsingLibSystem;
+ (id)userContainerLibPathUsingLibSystem;

@end
