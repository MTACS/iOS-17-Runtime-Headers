
@interface TapToRadarKitHelper : NSObject

+ (id)createDraft:(id)arg1 description:(id)arg2 attachmentURLs:(id)arg3 extensionIDs:(id)arg4 deviceIDs:(id)arg5 component:(id)arg6;
+ (bool)createProblem:(id)arg1 componentVersion:(id)arg2 componentID:(id)arg3 title:(id)arg4 description:(id)arg5 attachmentURLs:(id)arg6 extensionIDs:(id)arg7 deviceIDs:(id)arg8 displayReason:(id)arg9;
+ (id)getLogger;

@end
