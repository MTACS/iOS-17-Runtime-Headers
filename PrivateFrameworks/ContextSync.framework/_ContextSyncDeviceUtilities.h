
@interface _ContextSyncDeviceUtilities : NSObject

+ (id)currentBootSessionUUID;
+ (bool)isSupportEnabledForBMDSL:(id)arg1 useCase:(id)arg2 withError:(id*)arg3;
+ (void)updateDescriptionForError:(id*)arg1 withErrorCode:(long long)arg2;

@end
