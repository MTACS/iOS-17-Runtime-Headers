
@interface ACDTCCUtilities : NSObject

+ (int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (bool)TCCSupportedForAccountTypeID:(id)arg1;
+ (struct __CFString { }*)_TCCServiceForAccountTypeID:(id)arg1;
+ (id)allTCCStatesForAccountTypeID:(id)arg1;
+ (bool)clearAllTCCStatesForAccountTypeID:(id)arg1;
+ (bool)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (bool)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(bool)arg3;

@end
