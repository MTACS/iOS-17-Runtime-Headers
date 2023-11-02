
@interface FSFUtils : NSObject

+ (id)availableStreams;
+ (id)getBase64EncodedStrFromData:(id)arg1;
+ (id)getBaseLocalPath;
+ (id)getDataFromBase64EncodedStr:(id)arg1;
+ (id)getStreamPath;
+ (id)getStreamURL;
+ (bool)isEnabledOnMacOS;
+ (bool)isPlatformMacOS;
+ (bool)isPlatformWatchOS;
+ (bool)isPlatformiOS;
+ (bool)isPlatformtvOS;
+ (bool)isSupportedPlatform;
+ (bool)isSupportedUser;
+ (bool)isUnderLegalRestriction;

@end
