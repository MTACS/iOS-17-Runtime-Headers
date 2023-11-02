
@interface VKRadarUtilities : NSObject

+ (void)createRadarWithTitle:(id)arg1 description:(id)arg2 componentName:(id)arg3 componentVersion:(id)arg4 componentID:(id)arg5;
+ (void)createRadarWithTitle:(id)arg1 description:(id)arg2 componentName:(id)arg3 componentVersion:(id)arg4 componentID:(id)arg5 keywordIDs:(id)arg6 attachmentURLs:(id)arg7 includeSysdiagnose:(bool)arg8;
+ (void)promptUserToFileBugWithAlertMessage:(id)arg1 bugTitle:(id)arg2 bugDescription:(id)arg3;

@end
